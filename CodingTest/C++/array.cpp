#include <iostream>
#include <array>
using namespace std;


// print 함수 재정의, array 배열을 값을 전달하는 코드
// 다양한 크기의 array 객체에 대해 동작하는 범용적인 배열 출력 함수
template<size_t N>
void print(const array<int, N>& arr){
    for(auto i : arr){
        cout << i << " ";
    }
    cout << endl;
};

int main(){
    array<int,10> arr1; // 크기가 10인 int 타입 배열 선언

    arr1[0] = 1; // 첫번째 원소를 1로 설정
    cout << arr1[0] << endl;

    array<int,4> arr2 = {1,2,3,4};
    for(int i=0; i<arr2.size(); i++){
        cout << arr2[i] << " ";
    }
    cout << endl;

    // .at()을 이용하여 예외처리
    try{
        cout<<arr2.at(2) << endl; // 2번째 인덱스의 원소 값을 가져옴
        cout<<arr2.at(4) << endl; // 4번째 인덱스가 없으므로 예외처리
    }
    catch (const out_of_range&ex)
    {
        cerr << ex.what() <<endl;
    }


    array<int,5> arr3={1,2,3,4,5};
    print(arr3);


    // 반복자를 사용 (.begin(), .end() 사용
    // STL 컨테이너 사용 가능
    for (auto it=arr3.begin(); it!=arr3.end(); it++){
        auto ele = *it;
        cout << ele << " ";
    }
    cout << endl;

    // const_iterator : 일반 반복자의 const 버전
    // reverse_iterator : 일반 반복자와 반대 방향으로 이동

    // front() : 배열의 첫번째 원소에 대한 참조를 반환
    // back() : 배열의 마지막 원소에 대한 참조를 반환
    // data() : 배열 객체 내부에서 실제 데이터 메모리 버퍼를 가리키는 포인터를 반환

    cout << arr3.front() << endl; //
    cout << arr3.back() <<endl;
    cout << *(arr3.data()+2) <<endl; // 그냥 arr3.data() 사용시 주소가 출력

}

