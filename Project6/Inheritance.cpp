//-----------------------��� : �θ� Ŭ���� �����ϱ�---------------------
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
//		cout << "�̸�: " << getName() << "\n";
//	}
//};
//
//class Student : Person {
//private:
//	int studentID;
//	// ������� name�� Person���κ��� ��������
//public:
//	Student(int studentID, string name) : Person(name) {
//		this->studentID = studentID;
//	}
//	void show() {
//		cout << "�л� ��ȣ: " << studentID << "\n";
//		cout << "�л� �̸�: " << getName() << "\n";
//	}	
//};
//
//int main(void) {
//	Student student(1, "ȫ�浿");
//	student.show();
//}


//--------------------�������̵� : �ڽ� Ŭ���� ���� �� ����ϱ�---------------
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
//		cout << "�̸�: " << getName() << "\n";
//	}
//};
//
//class Student : Person {
//private:
//	int studentID;
//	// ������� name�� Person���κ��� ��������
//public:
//	Student(int studentID, string name) : Person(name) {
//		this->studentID = studentID;
//	}
//	void show() {
//		cout << "�л� ��ȣ: " << studentID << "\n";
//		cout << "�л� �̸�: " << getName() << "\n";
//	}
//	// �������̵� ����
//	void showName() {
//		cout << "�л� �̸�: " << getName() << "\n";
//	}
//};
//
//int main(void) {
//	Student student(1, "ȫ�浿");
//	student.showName();
//	
//}

//-----------------���� ��� : �θ� Ŭ���� �ϳ� �� �����ϱ��ϰ� ����ϱ�-----------------
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Temp {
//public:
//	void showTemp() {
//		cout << "�ӽ� �θ� Ŭ�����Դϴ�.\n";
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
//		cout << "�̸�: " << getName() << "\n";
//	}
//};
//
//class Student : Person, public Temp {
//private:
//	int studentID;
//	// ������� name�� Person���κ��� ��������
//public:
//	Student(int studentID, string name) : Person(name) {
//		this->studentID = studentID;
//	}
//	void show() {
//		cout << "�л� ��ȣ: " << studentID << "\n";
//		cout << "�л� �̸�: " << getName() << "\n";
//	}
//	// �������̵� ����
//	void showName() {
//		cout << "�л� �̸�: " << getName() << "\n";
//	}
//};
//
//int main(void) {
//	Student student(1, "ȫ�浿");
//	student.showName();
//	student.showTemp();
//
//}