#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(void) {
	map<string, int> m;
	m["ȫ�浿"] = 1; m["�̼���"] = 2; m["�������"] = 3;
	map<string, int>::iterator iter;
	iter = m.begin();
	for (; iter != m.end(); iter++) {
		// iter->first : key�� ���� ���
		// iter->second : value�� ���� ���
		// key�� ������ ������
		cout << iter->first << ":" << iter->second << "\n";
	}
	cout << "\n";

	m["�Ӳ���"] = 4;
	// ���� �����͸� 0�� ���
	cout << m["���»��"] << "\n";
	cout << "\n";

	iter = m.begin();
	for (; iter != m.end(); iter++) {
		cout << iter->first << ":" << iter->second << "\n";
	}

}