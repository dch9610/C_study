//-------------------------������ ����غ���--------------------------------
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Character {
//private:
//	string name;
//	int ragePoint;
//	int hp;
//	int damage;
//public:
//	// ������ (Ŭ������ ������ �̸��� ������ ��ȯ�ڷ����� �ʿ����.)
//	Character(string name, int hp, int damage) {
//		this->name = name;
//		this->ragePoint = 0;
//		this->hp = hp;
//		this->damage = damage;
//	}
//	void show() {
//		cout << name << '[' << ragePoint << ']' << hp << " " << damage << '\n';
//	}
//};
//
//int main(void) {
//	Character character = Character("������", 50, 10);
//	character.show();
//}




//--------------------�⺻ ������ ����غ���-----------------------------
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Character {
//private:
//	string name;
//	int ragePoint;
//	int hp;
//	int damage;
//public:
//	// ������ (Ŭ������ ������ �̸��� ������ ��ȯ�ڷ����� �ʿ����.)
//	void show() {
//		cout << name << '[' << ragePoint << ']' << hp << " " << damage << '\n';
//	}
//};
//
//int main(void) {
//	Character character = Character();
//	character.show();
//}



//--------------------���� ������ ����غ���-----------------------------
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Character {
//private:
//	string name;
//	int ragePoint;
//	int hp;
//	int damage;
//public:
//	Character(string name, int hp, int damage) : name(name), ragePoint(0), hp(hp), damage(damage) {}
//	
//	// ��������� (Ư���� �ν��Ͻ��� ���� �޾� �ڱ��� ����� ������ ���� �� �ִ�.)
//	Character(const Character & other) {
//		name = other.name;
//		ragePoint = other.ragePoint;
//		hp = other.hp;
//		damage = other.damage;
//		
//	}
//	void pointup() { ragePoint++; }
//	void show() {
//		cout << name << '[' << ragePoint << ']' << hp << " " << damage << '\n';
//	}
//};
//
//int main(void) {
//	Character character1("������", 10, 20);
//	character1.pointup();
//	Character character2(character1);
//	character2.pointup();
//	character1.show();
//	character2.show();
//}


//--------------------�Ҹ��� ����غ���-----------------------------
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Character {
//private:
//	string name;
//	int ragePoint;
//	int hp;
//	int damage;
//public:
//	Character(string name, int hp, int damage) : name(name), ragePoint(0), hp(hp), damage(damage) {}
//	~Character() {
//		cout << "[��ü�� �Ҹ�˴ϴ�.]\n";
//	}
//	void pointup() { ragePoint++; }
//	void show() {
//		cout << name << '[' << ragePoint << ']' << hp << " " << damage << '\n';
//	}
//};
//
//int main(void) {
//	// �����Ҵ��� �̿��ؼ� ��ü�� ����
//	Character* character1 = new Character("������", 10, 20);
//	character1->pointup();
//	Character character2(*character1);
//	character2.pointup();
//	character1->show();
//	character2.show();
//
//	delete character1; // �����Ҵ��� �̿��Ͽ� ���������� �Ҹ��
//	// delete& character2; // �����Ҵ��� �̿����� �ʾƼ� ������ �߻�
//
//}