#include <iostream>

using namespace std;

class A {
public:
	// ���� ���� �Լ� '=0' ���
	virtual void show()=0 {
		cout << "AŬ���� �Դϴ�" << endl;
	}
};

class B :public A {
	// ���� ���� �Լ��� ����Ͽ���
	// show() �Լ��� ���������� ������ B Ŭ������ ��ü�� ����� �� ����
public:
	virtual void show() {
		cout << "BŬ���� �Դϴ�" << endl;
	}

};

int main(void) {
	A* p;
	B b;
	p = &b;
	p->show(); 
}