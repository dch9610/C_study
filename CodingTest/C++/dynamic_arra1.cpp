#include "Student.h"
// main 함수 작성
int main(){
    int nStudents;
    cout << "반 학생 수를 입력하세여: ";
    cin >> nStudents;

    dynamic_array<student> class1(nStudents);
    for(int i=0; i<nStudents; i++){
        string name;
        int standard;
        cout << i+1 << "번째 학생 이름과 나이를 입력하세요: ";
        cin >> name >> standard;
        class1[i] = student{name, standard};
    }

    // 배열 크기보다 큰 인덱스의 학생에 접근
    try{
        class1.at(nStudents) = student{"JOn",8};
    }
    catch (...) {
        cout << "예외발생" << endl;
    }

    // 깊은 복사
    auto class2 = class1;
    cout << "1반 복사하여 2반 생성: " << class2.to_string() <<endl;

    // 두 학급 합치기
    auto class3 = class1+class2;
    cout << "1반 2반 합치기: " << class3.to_string() <<endl;

    return 0;
}



































