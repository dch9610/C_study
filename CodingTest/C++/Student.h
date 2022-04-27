//
// Created by Lee on 2022-04-27.
//

#ifndef CODINGTEST_STUDENT_H
#define CODINGTEST_STUDENT_H

#include <string>
#include <algorithm>
#include <iostream>
#include <sstream>

using namespace std;


// 학생정보를 저장할 구조체 정의
// << 연산자를 이용한 표준 출력 지원
struct student{
    string name;
    int standard;
};

ostream& operator<< (ostream& os, const student& s){
    return (os << "{" << s.name << ", " << s.standard << "}");
}

// dynamic_array라는 이름의 클래스 템플릿 작성 후, 멤버 변수 선언
template <typename T>
class dynamic_array{
    T* data;
    size_t n;
public:
    // 배열 크기를 인자로 받는 생성자와 복사 생성자를 추가
    dynamic_array(int n){
        this->n = n;
        data = new T[n];
    }

    // 복사 생성자
    dynamic_array(const dynamic_array<T>& other){
        n = other.n;
        data =new T[n];

        // 깊은 복사
        for(int i=0; i<n; i++){
            data[i] = other[i];
        }
    }

    // 멤버 데이터에 직접 접근하기 위한 [] 연산자와 at() 함수 작성
    // [] 연산자를 제공함으로써 array와 비슷한 방식으로 배열원소에 접근
    T& operator[](int index){
        return data[index];
    }

    const T& operator[] (int index) const{
        return data[index];
    }

    T& at(int index){
        if(index < n){
            return data[index];
        }
        throw "Index out of range";
    }

    // 배열의 크기를 반환하는 size() 멤버 함수와 소멸자를 구현
    size_t size() const{
        return n;
    }

    ~dynamic_array() {delete[] data;}

    // 순회할때 사용할 반복자 관련 함수를 정의
    T* begin(){return data};
//    const T* begin(){return data;}
    const T* end(){return data+n;}

    // 두 배열을 하나로 합치는 연산을 수행하는 + 연산자 함수를 정의
    friend dynamic_array<T> operator+(const dynamic_array<T>& arr1, dynamic_array<T>& arr2){
        dynamic_array<T> result(arr1.size() + arr2.size());
        copy(arr1.begin(), arr1.end(), result.begin());
        copy(arr2.begin(), arr2.end(), result.begin() + arr1.size());

        return result;
    }

    // 배열에 저장된 모든 데이터를 문자열로 반환하는 to_string() 멤버함수 : 쉼표를 추가해서 반환
    // 데이터 구분을 위한 문자열 sep를 인자로 받으며, sep의 기본값은 쉼표로 지정
    string to_string(const string& sep=", "){
        if (n==0){
            return "";
        }

        ostringstream os;
        os << data[0];

        for(int i=0; i<n; i++){
            os << sep << data[i];
        }

        return os.str();

    }
};



#endif //CODINGTEST_STUDENT_H
