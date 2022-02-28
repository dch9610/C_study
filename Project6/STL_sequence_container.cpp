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

	// iterator�� �̿��Ͽ� �� ���ҿ� ����
	deque<int>::iterator iter;
	iter = d.begin(); // �� �� ���ҷ� ����
	d.insert(iter + 1, 3, 5); // 1 + 1 = 2��° ���� ��ġ �տ� 5�� ���� 3�� �ִ´ٴ� �ǹ�
	iter = d.begin();
	d.insert(iter, 1, 9); // 1���� ������ġ�� 9�� ���� 1�� �ִ´ٴ� �ǹ�
	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << ' ';
	}
	cout << "\n";
	d.clear();
	cout << d.empty() << "\n";
}