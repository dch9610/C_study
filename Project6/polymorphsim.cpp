#include <iostream>

using namespace std;

class A {
public:
	void show() {
		cout << "A클래스 입니다" << endl;
	}
};

class B :public A {
	void show() {
		cout << "B클래스 입니다" << endl;
	}
};

int main(void) {
	A* p;
	A a;
	B b;
	p = &a;
	p->show();
	p = &b;
	p->show(); // 여전히 A 클래스의 show() 함수를 호출
}