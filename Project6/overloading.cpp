//--------------------C++의 함수 오버로딩 실습-------------------
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Person {
//private:
//	string name;
//public:
//	// 매개변수가 없는 경우 멤버변수 name에 값을 넣음
//	Person() {
//		name = "임꺽정";
//	}
//	// 매개변수가 있는 경우 해당 값으로 초기화
//	Person(string name) : name(name){ }
//	void showName() {
//		cout << "이름: " << name << "\n";
//	}
//};
//
//int main(void) {
//	Person person1;
//	person1.showName();
//	Person person2("홍길동");
//	person2.showName();
//}

// -------------------- 연산자 오버로딩---------------------
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Person {
//private:
//	string name;
//public:
//	// 매개변수가 없는 경우 멤버변수 name에 값을 넣음
//	Person() {
//		name = "임꺽정";
//	}
//
//	// 매개변수가 있는 경우 해당 값으로 초기화
//	Person(string name) : name(name) { }
//
//	// +를 오버로딩 
//	Person operator+(const Person& other) {
//		return Person(name + " & " + other.name);
//	}
//	void showName() {
//		cout << "이름: " << name << "\n";
//	}
//};
//
//int main(void) {
//	Person person1;
//	Person person2("홍길동");
//	Person result = person1 + person2;
//	result.showName();
//}