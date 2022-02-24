//-------------------------생성자 사용해보기--------------------------------
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
//	// 생성자 (클래스와 동일한 이름을 가지며 반환자료형이 필요없다.)
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
//	Character character = Character("슬라임", 50, 10);
//	character.show();
//}




//--------------------기본 생성자 사용해보기-----------------------------
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
//	// 생성자 (클래스와 동일한 이름을 가지며 반환자료형이 필요없다.)
//	void show() {
//		cout << name << '[' << ragePoint << ']' << hp << " " << damage << '\n';
//	}
//};
//
//int main(void) {
//	Character character = Character();
//	character.show();
//}



//--------------------복사 생성자 사용해보기-----------------------------
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
//	// 복사생성자 (특정한 인스턴스의 값을 받아 자기의 멤버의 값으로 담을 수 있다.)
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
//	Character character1("슬라임", 10, 20);
//	character1.pointup();
//	Character character2(character1);
//	character2.pointup();
//	character1.show();
//	character2.show();
//}


//--------------------소멸자 사용해보기-----------------------------
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
//		cout << "[객체가 소멸됩니다.]\n";
//	}
//	void pointup() { ragePoint++; }
//	void show() {
//		cout << name << '[' << ragePoint << ']' << hp << " " << damage << '\n';
//	}
//};
//
//int main(void) {
//	// 동적할당을 이용해서 객체를 만듦
//	Character* character1 = new Character("슬라임", 10, 20);
//	character1->pointup();
//	Character character2(*character1);
//	character2.pointup();
//	character1->show();
//	character2.show();
//
//	delete character1; // 동적할당을 이용하여 성공적으로 소멸됨
//	// delete& character2; // 동적할당을 이용하지 않아서 오류가 발생
//
//}