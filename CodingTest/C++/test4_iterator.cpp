//// 헤더파일 포함
//#include <iostream>
//#include <forward_list>
//#include <vector>
//
//using namespace std;
//
//int main(){
//    // vector를 사용하여 명단 작성
//    vector<string> vec = {"Lee", "Kim", "Park", "Vettal"};
//
//    auto it = vec.begin(); // 상수 시간
//    cout << "가장 최근 우승자: " << *it << endl;
//
//    it += 2;
//    cout << "2년전 우승자: " << *it << endl;
//
//
//    advance(it, -1); // it -= 1; 동일일
//    cout << "그후 1년 뒤 우승자: " << *it << endl;
//
//    // forward_list를 이용하여 같은 작업 수행
//    forward_list<string> fwd(vec.begin(), vec.end()); // vec의 값을 이용하여 생성
//
//    auto it1 = fwd.begin();
//    cout << "가장 최근 우승자: " << *it1 << endl;
//
//    advance(it1, 3);
//    cout << "3년전 우승자: " << *it1 << endl;
//
////    it1-=2; // 연속적인 순회를 통해서만 특정 원소에 접근하기 때문에 에러
////    cout << "그후 2년뒤 우승자: " << *it1 << endl;
//
//}
