#include <iostream>

using namespace std;

int main(void) {
	int a = 7, b = 0;
	try {
		if (b == 0) {
			throw "0���� ���� �� �����ϴ�.";
		}
		cout << a / b << "\n";
	}
	// ���ܰ� �߻����� �ÿ� throw�� �޾Ƽ� �����
	catch (const char* str) {
		cout << str << "\n";
	}
}