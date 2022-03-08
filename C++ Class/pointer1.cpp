#include <iostream>
using namespace std;

int main(){
    int intVal = 100;
    int *plntVal = &intVal; // 포인터 변수 plntVal의 정의와 intVal 주소 대입
    cout << intVal << " " << *plntVal << endl; // 100 100

    intVal += 100;
    cout << intVal << " " << *plntVal << endl; // 200 200
    *plntVal = *plntVal + 10; // *plntVal을 변경하므로 intVal도 변경됨
    cout << intVal << " " << *plntVal << endl; // 210 210
}

