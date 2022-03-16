// vector
// 동적 배열을 캡슐화한 순차 컨테이너
// 메모리에서 원소들을 연속해서 저장

#include <iostream>
#include <vector>
using namespace std;

int main(){
    cout << "input size. " << endl;
    int intSize;
    cin >> intSize;

    // vector 정의
    vector<int> vInt(intSize);  // intSize 크기의 int 타입 vector의 생성
    for(unsigned int i = 0; i<vInt.size(); i++){ // int의 기본값인 0으로 초기화
        vInt[i] = i;               // [] 연산자를 이용한 원소의 접근
        cout << vInt.at(i) << "\t"; // at() 함수를 원소의 접근
   }
    cout << endl;

    // 배열을 이용하여 vector의 생성 및 초기화
    int intA[3] = {10,20,30};

    // 크기 3인 int vector를 {10, 20, 30}으로 초기화
    vector<int> vInt2(intA, intA+3);
    for(unsigned int i=0; i<vInt2.size(); i++){
        cout<<vInt2.at(i) << "\t";
    }
    cout << endl;
    cout<< vInt.size() << " " << vInt.capacity() << endl;
    // 크기 조정
    vInt.resize(3);
    vInt.shrink_to_fit(); // size와 capacity를 맞춰줌

}