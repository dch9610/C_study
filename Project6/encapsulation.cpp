//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Student {
//private:
//	int studentId;
//	string name;
//public:
//	Student(int studenId, string name) : studentId(studentId), name(name){ }
//
//	// friend 키워드를 이용해 이름에 접근 (매개변수를 2개 쓸때)
//	friend Student operator +(const Student& student, const Student& other) {
//		return Student(student.studentId, student.name + " & " + other.name);
//	}
//
//	// 연산자 오버로딩은 매개변수를 하나만 받는 특징이 있음
//	/*Student operator +(const Student& other) {
//		return Student(studentId,name + " & " + other.name);
//	}*/
//
//	void showName() {
//		cout << "이름: " << name << "\n";
//	}
//};
//
//int main(void) {
//	Student student1(1, "홍길동");
//	Student result = student1 + student1;
//	result.showName();
//}


//---------------------프렌드 클래스 : 시간 클래스 정의하기 ------------------
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <string>
//#include <ctime>
//
//using namespace std;
//
//class Time {
//	friend class Date; // Date 클래스에서 Time 클래스를 이용할 수 있음
//private:
//	int hour, min, sec;
//public:
//	void setCurrentTime() {
//		time_t currentTime = time(NULL);
//		struct tm* p = localtime(&currentTime);
//		hour = p->tm_hour;
//		min = p->tm_min;
//		sec = p->tm_sec;
//	}
//};
//
//class Date {
//private:
//	int year, month, day;
//public:
//	Date(int year, int month, int day) : year(year), month(month), day(day){ }
//	void show(const Time& t) {
//		cout << "지정된 날짜: " << year << "년 " << month << "월 " << day << "일 " << "\n";
//		// 원래는 멤버함수를 이용해서 불러와야하지만 friend 클래스로 정의되어 private에 바로 접근할 수 있다.
//		cout << "현재시간: " << t.hour << ":" << t.min << ":" << t.sec << "\n";
//	}
//};
//
//int main(void) {
//	Time time;
//	time.setCurrentTime();
//	Date date = Date(2022, 02, 24);
//	date.show(time);
//}


//----------------정적 멤버 구현---------------------------
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Person {
//private:
//	string name;
//public:
//	static int count;
//	Person(string name) : name(name) {
//		count++;
//	}
//};
//
//// 정적 변수의 값을 초기화
//int Person::count = 0;
//
//int main(void) {
//	Person p1("홍길동");
//	Person p2("이순신");
//	Person p3("임꺽정");
//	cout << "사람의 수: " << Person::count << "\n";
//
//
//}

//--------------상수 멤버 구현 --------------------------
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Person {
//private:
//	// 상수 멤버 변수
//	const int id;
//	string name;
//public:
//	static int count;
//	Person(int id, string name) :id(id), name(name) {
//		count++;
//	}
//	//오류 발생 id는 상수 멤버로 수정 불가능
//	//void setId(int id) {
//	//	this->id = id; //
//	//}
//};
//
//// 정적 변수의 값을 초기화
//int Person::count = 0;
//
//int main(void) {
//	Person p1(1,"홍길동");
//	Person p2(2,"이순신");
//	Person p3(3,"임꺽정");
//	cout << "사람의 수: " << Person::count << "\n";
//
//
//}