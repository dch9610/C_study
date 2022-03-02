#define _WINSOCK_DEPRECATED_NO_WARNINGS // inet_addr("127.0.0.1")을 사용하기 위함
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
	string sent;

	// Winsock을 초기화 합니다. 2.2 버전
	// &wsaData에 Startup된 결과를 담음 0이면 성공
	if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
		ShowErrorMessage("WSAStartup( )");
	}

	// TCP 소켓을 생성합니다.
	// IPv4 사용
	clientSocket = socket(PF_INET, SOCK_STREAM, 0);

	if (clientSocket == INVALID_SOCKET) {
		ShowErrorMessage("socket()");
	}

	memset(&serverAddress, 0, sizeof(serverAddress));
	serverAddress.sin_family = AF_INET;
	serverAddress.sin_addr.s_addr = inet_addr("127.0.0.1"); // 문자열 IP를 네트워크 바이트 형식으로
	serverAddress.sin_port = htons(serverPort); // 2바이트 정수 네트워크 형식으로 short

	if (connect(clientSocket, (SOCKADDR*)&serverAddress, sizeof(serverAddress)) == SOCKET_ERROR) {
		ShowErrorMessage("connect()");
	}
	cout << "[현재상태] connect()\n";

	// 반복적으로 서버로 메시지를 전송하고 에코 메시지를 전달 받습니다.
	while (1) {
		cout << "[메시지 전송]: ";
		getline(cin, sent);
		if (sent == "") {
			continue;
		}

		// c_str : c언어에 문자열 버퍼 형태로 바꾸기 위해서
		send(clientSocket, sent.c_str(), sent.length(), 0);
		int length = recv(clientSocket, received, sizeof(received), 0);
		// 문자열 마지막은 널값
		received[length] = '\0';
		if (strcmp(received, "[exit]") == 0) {
			cout << "[서버종료]\n";
			break;
		}
		cout << "[서버메시지]: " << received << "\n";

	}
	closesocket(clientSocket);;
	WSACleanup();
	return 0;


}