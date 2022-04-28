// 헤더파일을 포함
#include <iostream>
#include <list>

using namespace std;

int main(){
    // 초깃값을 갖는 리스트 생성, 새로운 원소 추가
    list<int> list1 = {1,2,3,4,5};
    list1.push_back(6);
    list1.insert(next(list1.begin()), 0); // list1 첫번째 원소 다음에 0을 삽입
    list1.insert(list1.end(),7); // 마지막 원소 뒤에 7을 삽입

    // pop_back 함수를 이용하여 원소 제거
    // forward_list에서는 제공하지 않음
    list1.pop_back();

    cout << "삽입 & 삭제 후 리스트: ";
    for(auto &it:list1){
        cout <<it<< " ";
    }

    cout <<endl;
    auto l_it1 = next(list1.begin(), 4); // 시작원소부터해서 4번째 원소를 가리킴 (next 사용
    list1.insert(next(list1.begin(),2),0); // l_it1 무효화 되지 않음, 2번째 원소 뒤에 0을 삽입
    cout << *l_it1 << endl;

    cout << "삽입 & 삭제 후 리스트: ";
    for(auto &it:list1){
        cout <<it<< " ";
    }
    // list는 두 개의 포인터를 가지고 있고 삭제시 두개의 포인터를 관리
    // 단일 연결 리스트보다 두배의 연산을 수행
}
