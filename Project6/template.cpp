#include <iostream>
#include <string>

using namespace std;

template <typename T>
void change(T& a, T& b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

int main(void) {
	string a = "ȫ�浿";
	string b = "�̼���";
	change(a, b);
	cout << a << ":" << b << endl;
}