#include <iostream>
using namespace std;

int main(){
    cout << "Enter the length of a name" << endl;
    int length;
    cin >> length;
    char* name = new char[length+1]; // new를 이용한 메모리 할당
    cin >> name;
    cout << name << endl;
    delete [] name; // delete를 이용한 메모리 해제
}