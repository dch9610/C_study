#include <iostream>
#include <vector>

using namespace std;


int main(void) {
	vector<int> d;
	d.push_back(3); d.push_back(7); d.push_back(4);
	vector<int>::iterator iter;
	iter = d.begin();
	d.insert(iter + 1, 3, 5);
	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << ' ';
		
	}
	cout << "\n";
	d.clear();
	cout << d.empty();
}