#include <iostream>

using namespace std;

class A {
public:
	// 순수 가상 함수 '=0' 사용
	virtual void show()=0 {
		cout << "A클래스 입니다" << endl;
	}
};

class B :public A {
	// 순수 가상 함수를 사용하여서
	// show() 함수를 재정의하지 않으면 B 클래스의 객체를 사용할 수 없음
public:
	virtual void show() {
		cout << "B클래스 입니다" << endl;
	}

};

int main(void) {
	A* p;
	B b;
	p = &b;
	p->show(); 
}