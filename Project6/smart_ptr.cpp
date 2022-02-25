#include <iostream>

using namespace std;

int main(void) {
	int* arr = new int(1);
	shared_ptr<int> sp1(arr);
	weak_ptr<int> wp = sp1;
	cout << sp1.use_count() << "\n";
	cout << wp.use_count() << "\n";
	if (true) {
		shared_ptr<int> sp2 = wp.lock(); // shared_ptr 포인터 변환
		cout << sp1.use_count() << "\n";
		cout << wp.use_count() << "\n";
	}
	// 스코프를 벗어나므로 sp2가 해제됩니다.
	cout << sp1.use_count() << "\n";
	cout << wp.use_count() << "\n";
}