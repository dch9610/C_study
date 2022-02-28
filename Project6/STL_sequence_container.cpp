#include <iostream>
#include <queue>

using namespace std;


int main(void) {
	deque<int> d;
	d.push_front(3); d.push_back(7); d.pop_front(); d.push_front(4);
	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << ' ';
		cout << "\n";
	}

	// iterator을 이용하여 각 원소에 접근
	deque<int>::iterator iter;
	iter = d.begin(); // 맨 앞 원소로 접근
	d.insert(iter + 1, 3, 5); // 1 + 1 = 2번째 원소 위치 앞에 5의 값을 3번 넣는다는 의미
	iter = d.begin();
	d.insert(iter, 1, 9); // 1번쨰 원소위치에 9의 값을 1번 넣는다는 의미
	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << ' ';
	}
	cout << "\n";
	d.clear();
	cout << d.empty() << "\n";
}