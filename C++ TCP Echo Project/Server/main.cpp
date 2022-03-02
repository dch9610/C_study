#include <iostream>
#include <string>
#include <winsock2.h>

using namespace std;

// ������ ó���ϴ� ���� �ڵ鸵 �Լ�
void ShowErrorMessage(string message) {
	cout << "[���� �߻�]: " << message << "\n";
	exit(1);
}

int main() {
	// ������ ����ü�� �ϳ��� ������ ����
	WSADATA wsaData;
	SOCKET serverSocket, clientSocket;
	SOCKADDR_IN serverAddress, clientAddress;

	int serverPort = 9876;
	// ���ڿ� ���� ũ�� 256
	char received[256];

	// Winsock�� �ʱ�ȭ �մϴ�. 2.2 ����
	// &wsaData�� Startup�� ����� ���� 0�̸� ����
	if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
		ShowErrorMessage("WSAStartup( )");
	}

	// TCP ������ �����մϴ�.
	// IPv4 ���
	serverSocket = socket(PF_INET, SOCK_STREAM, 0);

	if (serverSocket == INVALID_SOCKET) {
		ShowErrorMessage("socket()");
	}

	memset(&serverAddress, 0, sizeof(serverAddress));
	serverAddress.sin_family = AF_INET;
	serverAddress.sin_addr.s_addr = htonl(INADDR_ANY); // 4����Ʈ ������ ��Ʈ��ũ ����Ʈ �������� long
	serverAddress.sin_port = htons(serverPort); // 2����Ʈ ���� ��Ʈ��ũ �������� short
	
	// �ش� ���� �������� ���ε�
	if (bind(serverSocket, (SOCKADDR*)&serverAddress, sizeof(serverAddress)) == SOCKET_ERROR) {
		ShowErrorMessage("bind()");
	}
	cout << "[�������] bind()\n";

	// ���ÿ� 5������ Ŭ���̾�Ʈ�� ����
	if (listen(serverSocket, 5) == SOCKET_ERROR) {
		ShowErrorMessage("listen()");
	}
	cout << "[�������] listen()\n";

	int sizeClientAddress = sizeof(clientAddress);
	clientSocket = accept(serverSocket, (SOCKADDR*)&clientAddress, &sizeClientAddress);
	cout << "[�������] accept()\n";

	if (clientSocket == INVALID_SOCKET) {
		ShowErrorMessage("accept()");
	}
	// Ŭ���̾�Ʈ�� �޽����� �޾Ƽ� �״�� �ٽ� ����
	while(1){
		int length = recv(clientSocket, received, sizeof(received), 0);
		received[length] = NULL; // ����ġ ���� ���ڰ� ������ ��� �߶�
		cout << "[Ŭ���̾�Ʈ �޽���]: " << received << "\n";
		cout << "[�޽��� ����]: " << received << "\n";
		if (strcmp(received, "[exit]") == 0) {
			send(clientSocket, received, sizeof(received) - 1, 0); 
			cout << "[��������]\n";
			break;
		}
		send(clientSocket, received, sizeof(received) - 1, 0); // sizeof(received) - 1 ������ ���� ���� ����
	}

	closesocket(clientSocket);
	closesocket(serverSocket);
	WSACleanup();
	return 0;
}