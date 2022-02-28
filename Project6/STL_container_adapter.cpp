#include <iostream>
#include <queue>

using namespace std;

// 큰수대로 출력 (우선순위 큐를 사용)
int main(void) {
	int n=0, x;
	cin >> n;
	priority_queue<int> pq;
	for (int i = 0; i < n; i++) {
		cin >> x;
		pq.push(x);
	}

	while (!pq.empty()) {
		cout << pq.top() << ' ';
		pq.pop();
	}
	
}