#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(void) {
	map<string, int> m;
	m["홍길동"] = 1; m["이순신"] = 2; m["세종대왕"] = 3;
	map<string, int>::iterator iter;
	iter = m.begin();
	for (; iter != m.end(); iter++) {
		// iter->first : key의 값만 출력
		// iter->second : value의 값만 출력
		// key의 값으로 나열됨
		cout << iter->first << ":" << iter->second << "\n";
	}
	cout << "\n";

	m["임꺽정"] = 4;
	// 없는 데이터면 0이 출력
	cout << m["없는사람"] << "\n";
	cout << "\n";

	iter = m.begin();
	for (; iter != m.end(); iter++) {
		cout << iter->first << ":" << iter->second << "\n";
	}

}