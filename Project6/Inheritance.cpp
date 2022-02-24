//-----------------------상속 : 부모 클래스 정의하기---------------------
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Person {
//private:
//	string name;
//public:
//	Person(string name) : name(name) {}
//	string getName() {
//		return name;
//	}
//	void showName() {
//		cout << "이름: " << getName() << "\n";
//	}
//};
//
//class Student : Person {
//private:
//	int studentID;
//	// 멤버변수 name은 Person으로부터 물려받음
//public:
//	Student(int studentID, string name) : Person(name) {
//		this->studentID = studentID;
//	}
//	void show() {
//		cout << "학생 번호: " << studentID << "\n";
//		cout << "학생 이름: " << getName() << "\n";
//	}	
//};
//
//int main(void) {
//	Student student(1, "홍길동");
//	student.show();
//}


//--------------------오버라이딩 : 자식 클래스 정의 및 사용하기---------------
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//
//class Person {
//private:
//	string name;
//public:
//	Person(string name) : name(name) {}
//	string getName() {
//		return name;
//	}
//	void showName() {
//		cout << "이름: " << getName() << "\n";
//	}
//};
//
//class Student : Person {
//private:
//	int studentID;
//	// 멤버변수 name은 Person으로부터 물려받음
//public:
//	Student(int studentID, string name) : Person(name) {
//		this->studentID = studentID;
//	}
//	void show() {
//		cout << "학생 번호: " << studentID << "\n";
//		cout << "학생 이름: " << getName() << "\n";
//	}
//	// 오버라이딩 적용
//	void showName() {
//		cout << "학생 이름: " << getName() << "\n";
//	}
//};
//
//int main(void) {
//	Student student(1, "홍길동");
//	student.showName();
//	
//}

//-----------------다중 상속 : 부모 클래스 하나 더 정의하기하고 사용하기-----------------
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Temp {
//public:
//	void showTemp() {
//		cout << "임시 부모 클래스입니다.\n";
//	}
//};
//
//class Person {
//private:
//	string name;
//public:
//	Person(string name) : name(name) {}
//	string getName() {
//		return name;
//	}
//	void showName() {
//		cout << "이름: " << getName() << "\n";
//	}
//};
//
//class Student : Person, public Temp {
//private:
//	int studentID;
//	// 멤버변수 name은 Person으로부터 물려받음
//public:
//	Student(int studentID, string name) : Person(name) {
//		this->studentID = studentID;
//	}
//	void show() {
//		cout << "학생 번호: " << studentID << "\n";
//		cout << "학생 이름: " << getName() << "\n";
//	}
//	// 오버라이딩 적용
//	void showName() {
//		cout << "학생 이름: " << getName() << "\n";
//	}
//};
//
//int main(void) {
//	Student student(1, "홍길동");
//	student.showName();
//	student.showTemp();
//
//}