#include <iostream>

using namespace std;

int main(void) {
	int* arr = new int(1);
	shared_ptr<int> sp1(arr);
	weak_ptr<int> wp = sp1;
	cout << sp1.use_count() << "\n";
	cout << wp.use_count() << "\n";
	if (true) {
		shared_ptr<int> sp2 = wp.lock(); // shared_ptr ������ ��ȯ
		cout << sp1.use_count() << "\n";
		cout << wp.use_count() << "\n";
	}
	// �������� ����Ƿ� sp2�� �����˴ϴ�.
	cout << sp1.use_count() << "\n";
	cout << wp.use_count() << "\n";
}