#include <iostream>

using namespace std;

class A {
public:
	// �����Լ� virtual ���
	virtual void show() {
		cout << "AŬ���� �Դϴ�" << endl;
	}
};

class B :public A {
	virtual void show() {
		cout << "BŬ���� �Դϴ�" << endl;
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