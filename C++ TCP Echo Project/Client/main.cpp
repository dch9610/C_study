#define _WINSOCK_DEPRECATED_NO_WARNINGS // inet_addr("127.0.0.1")�� ����ϱ� ����
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
	string sent;

	// Winsock�� �ʱ�ȭ �մϴ�. 2.2 ����
	// &wsaData�� Startup�� ����� ���� 0�̸� ����
	if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
		ShowErrorMessage("WSAStartup( )");
	}

	// TCP ������ �����մϴ�.
	// IPv4 ���
	clientSocket = socket(PF_INET, SOCK_STREAM, 0);

	if (clientSocket == INVALID_SOCKET) {
		ShowErrorMessage("socket()");
	}

	memset(&serverAddress, 0, sizeof(serverAddress));
	serverAddress.sin_family = AF_INET;
	serverAddress.sin_addr.s_addr = inet_addr("127.0.0.1"); // ���ڿ� IP�� ��Ʈ��ũ ����Ʈ ��������
	serverAddress.sin_port = htons(serverPort); // 2����Ʈ ���� ��Ʈ��ũ �������� short

	if (connect(clientSocket, (SOCKADDR*)&serverAddress, sizeof(serverAddress)) == SOCKET_ERROR) {
		ShowErrorMessage("connect()");
	}
	cout << "[�������] connect()\n";

	// �ݺ������� ������ �޽����� �����ϰ� ���� �޽����� ���� �޽��ϴ�.
	while (1) {
		cout << "[�޽��� ����]: ";
		getline(cin, sent);
		if (sent == "") {
			continue;
		}

		// c_str : c�� ���ڿ� ���� ���·� �ٲٱ� ���ؼ�
		send(clientSocket, sent.c_str(), sent.length(), 0);
		int length = recv(clientSocket, received, sizeof(received), 0);
		// ���ڿ� �������� �ΰ�
		received[length] = '\0';
		if (strcmp(received, "[exit]") == 0) {
			cout << "[��������]\n";
			break;
		}
		cout << "[�����޽���]: " << received << "\n";

	}
	closesocket(clientSocket);;
	WSACleanup();
	return 0;


}