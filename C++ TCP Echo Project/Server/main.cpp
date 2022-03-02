#include <iostream>
#include <string>
#include <winsock2.h>

using namespace std;

// 오류를 처리하는 에러 핸들링 함수
void ShowErrorMessage(string message) {
	cout << "[오류 발생]: " << message << "\n";
	exit(1);
}

int main() {
	// 데이터 구족체를 하나의 변수로 생성
	WSADATA wsaData;
	SOCKET serverSocket, clientSocket;
	SOCKADDR_IN serverAddress, clientAddress;

	int serverPort = 9876;
	// 문자열 버퍼 크기 256
	char received[256];

	// Winsock을 초기화 합니다. 2.2 버전
	// &wsaData에 Startup된 결과를 담음 0이면 성공
	if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
		ShowErrorMessage("WSAStartup( )");
	}

	// TCP 소켓을 생성합니다.
	// IPv4 사용
	serverSocket = socket(PF_INET, SOCK_STREAM, 0);

	if (serverSocket == INVALID_SOCKET) {
		ShowErrorMessage("socket()");
	}

	memset(&serverAddress, 0, sizeof(serverAddress));
	serverAddress.sin_family = AF_INET;
	serverAddress.sin_addr.s_addr = htonl(INADDR_ANY); // 4바이트 정수를 네트워크 바이트 형식으로 long
	serverAddress.sin_port = htons(serverPort); // 2바이트 정수 네트워크 형식으로 short
	
	// 해당 서버 소켓으로 바인딩
	if (bind(serverSocket, (SOCKADDR*)&serverAddress, sizeof(serverAddress)) == SOCKET_ERROR) {
		ShowErrorMessage("bind()");
	}
	cout << "[현재상태] bind()\n";

	// 동시에 5개까지 클라이언트를 접속
	if (listen(serverSocket, 5) == SOCKET_ERROR) {
		ShowErrorMessage("listen()");
	}
	cout << "[현재상태] listen()\n";

	int sizeClientAddress = sizeof(clientAddress);
	clientSocket = accept(serverSocket, (SOCKADDR*)&clientAddress, &sizeClientAddress);
	cout << "[현재상태] accept()\n";

	if (clientSocket == INVALID_SOCKET) {
		ShowErrorMessage("accept()");
	}
	// 클라이언트의 메시지를 받아서 그대로 다시 전달
	while(1){
		int length = recv(clientSocket, received, sizeof(received), 0);
		received[length] = NULL; // 예기치 못한 문자가 들어왔을 경우 잘라냄
		cout << "[클라이언트 메시지]: " << received << "\n";
		cout << "[메시지 전송]: " << received << "\n";
		if (strcmp(received, "[exit]") == 0) {
			send(clientSocket, received, sizeof(received) - 1, 0); 
			cout << "[서버종료]\n";
			break;
		}
		send(clientSocket, received, sizeof(received) - 1, 0); // sizeof(received) - 1 마지막 공백 문자 제거
	}

	closesocket(clientSocket);
	closesocket(serverSocket);
	WSACleanup();
	return 0;
}