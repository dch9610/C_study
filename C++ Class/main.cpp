#include <iostream>
using namespace std;
const int SIZE=3;

int main(){
    // 배열 정렬 초기화
    // 지정되지 않은 원소의 초기값은 0으로 결정
    int intArray[SIZE] = {10, 20,30};
    int sum = 0;
    for(int i = 0; i<SIZE; i++){
        sum += intArray[i]; // 원소의 접근
    }
    // 문자의 배열은 문자열 리터럴을 이용하여 초기화
    char strArray1[]="a string"; // {'a', '', 's', 't', 'r', 'i'..}와 동일

    // 포인터를 사용해서도 지정가능
    cout << *intArray << "\n" << *(intArray +1) << "\n";
    cout << sum << endl;
}