#include <iostream>

using namespace std;

int main(void) {
	int a = 7, b = 0;
	try {
		if (b == 0) {
			throw "0으로 나눌 수 없습니다.";
		}
		cout << a / b << "\n";
	}
	// 예외가 발생했을 시에 throw를 받아서 출력함
	catch (const char* str) {
		cout << str << "\n";
	}
}