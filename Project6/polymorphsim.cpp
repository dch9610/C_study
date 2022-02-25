#include <iostream>

using namespace std;

class A {
public:
	// 가상함수 virtual 사용
	virtual void show() {
		cout << "A클래스 입니다" << endl;
	}
};

class B :public A {
	virtual void show() {
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
	p->show(); 
}