#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "행렬의 크기를 입력하시오: " << endl;
    int rowSize, columnSize;
    cin >> rowSize >> columnSize;

    cout << "행렬A [" << rowSize << "x" << columnSize << "] 의 값을 입력하시오.\n";

    // 이중포인터 포인터 변수의 주소값을 가진다.
    int** const intArrayA = new int*[rowSize];
    for(int i=0; i<rowSize;i++){
        intArrayA[i] = new int[columnSize];
        for(int j=0; j<columnSize; j++) {
            cin >> intArrayA[i][j];
        }
    }
    cout<<endl;
    delete []intArrayA;
}
