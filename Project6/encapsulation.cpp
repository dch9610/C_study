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
//	// friend Ű���带 �̿��� �̸��� ���� (�Ű������� 2�� ����)
//	friend Student operator +(const Student& student, const Student& other) {
//		return Student(student.studentId, student.name + " & " + other.name);
//	}
//
//	// ������ �����ε��� �Ű������� �ϳ��� �޴� Ư¡�� ����
//	/*Student operator +(const Student& other) {
//		return Student(studentId,name + " & " + other.name);
//	}*/
//
//	void showName() {
//		cout << "�̸�: " << name << "\n";
//	}
//};
//
//int main(void) {
//	Student student1(1, "ȫ�浿");
//	Student result = student1 + student1;
//	result.showName();
//}


//---------------------������ Ŭ���� : �ð� Ŭ���� �����ϱ� ------------------
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <string>
//#include <ctime>
//
//using namespace std;
//
//class Time {
//	friend class Date; // Date Ŭ�������� Time Ŭ������ �̿��� �� ����
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
//		cout << "������ ��¥: " << year << "�� " << month << "�� " << day << "�� " << "\n";
//		// ������ ����Լ��� �̿��ؼ� �ҷ��;������� friend Ŭ������ ���ǵǾ� private�� �ٷ� ������ �� �ִ�.
//		cout << "����ð�: " << t.hour << ":" << t.min << ":" << t.sec << "\n";
//	}
//};
//
//int main(void) {
//	Time time;
//	time.setCurrentTime();
//	Date date = Date(2022, 02, 24);
//	date.show(time);
//}


//----------------���� ��� ����---------------------------
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
//// ���� ������ ���� �ʱ�ȭ
//int Person::count = 0;
//
//int main(void) {
//	Person p1("ȫ�浿");
//	Person p2("�̼���");
//	Person p3("�Ӳ���");
//	cout << "����� ��: " << Person::count << "\n";
//
//
//}

//--------------��� ��� ���� --------------------------
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Person {
//private:
//	// ��� ��� ����
//	const int id;
//	string name;
//public:
//	static int count;
//	Person(int id, string name) :id(id), name(name) {
//		count++;
//	}
//	//���� �߻� id�� ��� ����� ���� �Ұ���
//	//void setId(int id) {
//	//	this->id = id; //
//	//}
//};
//
//// ���� ������ ���� �ʱ�ȭ
//int Person::count = 0;
//
//int main(void) {
//	Person p1(1,"ȫ�浿");
//	Person p2(2,"�̼���");
//	Person p3(3,"�Ӳ���");
//	cout << "����� ��: " << Person::count << "\n";
//
//
//}