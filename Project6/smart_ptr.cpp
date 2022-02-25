#include <iostream>

using namespace std;

int main(void) {
	unique_ptr<int> p1(new int(10));
	unique_ptr<int> p2;
	cout << "����Ʈ ������ 1: " << p1 << "\n";
	cout << "����Ʈ ������ 2: " << p2 << "\n";
	cout << "-----------------\n";

	cout << "---������ ����---\n";
	p2 = move(p1); //������ ����
	cout << "����Ʈ ������ 1:" << p2 << "\n";
	cout << "����Ʈ ������ 2:" << p2 << "\n";
	cout << "-----------------\n";

	cout << "--�޸� �Ҵ� ����--\n";
	p2.reset(); // �޸� �Ҵ� ����
	cout << "����Ʈ ������ 1:" << p1 << "\n";
	cout << "����Ʈ ������ 2:" << p2 << "\n";

}