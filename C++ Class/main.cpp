// vector
// 동적 배열을 캡슐화한 순차 컨테이너
// 메모리에서 원소들을 연속해서 저장

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vInt(5); //int 타입의 크기 5의 vector 정의
    for(vector<int> ::iterator it = vInt.begin(); it!=vInt.end(); ++it){
        *it=20;
        cout << *it <<"\t"; // 20 20 20 20 20
        cout << *it <<"\t"; //
        //const_iterator인 경우 *it의 값을 변경할 수 없다
    }
    cout << endl;

}