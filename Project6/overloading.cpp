//--------------------C++�� �Լ� �����ε� �ǽ�-------------------
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Person {
//private:
//	string name;
//public:
//	// �Ű������� ���� ��� ������� name�� ���� ����
//	Person() {
//		name = "�Ӳ���";
//	}
//	// �Ű������� �ִ� ��� �ش� ������ �ʱ�ȭ
//	Person(string name) : name(name){ }
//	void showName() {
//		cout << "�̸�: " << name << "\n";
//	}
//};
//
//int main(void) {
//	Person person1;
//	person1.showName();
//	Person person2("ȫ�浿");
//	person2.showName();
//}

// -------------------- ������ �����ε�---------------------
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Person {
//private:
//	string name;
//public:
//	// �Ű������� ���� ��� ������� name�� ���� ����
//	Person() {
//		name = "�Ӳ���";
//	}
//
//	// �Ű������� �ִ� ��� �ش� ������ �ʱ�ȭ
//	Person(string name) : name(name) { }
//
//	// +�� �����ε� 
//	Person operator+(const Person& other) {
//		return Person(name + " & " + other.name);
//	}
//	void showName() {
//		cout << "�̸�: " << name << "\n";
//	}
//};
//
//int main(void) {
//	Person person1;
//	Person person2("ȫ�浿");
//	Person result = person1 + person2;
//	result.showName();
//}