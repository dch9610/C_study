#include <iostream>
using namespace std;
const int ROW_SIZE=3;
const int COLUMN_SIZE = 5;

int main(){
    int intArray1[2] = {0,1};
    int intArray2[2] = {2,3};
    int intArray3[2] = {4,5};

    // 3개의 int* 즉 int 배열을 원소로 하는 배열
    int** const pplntArray = new int*[3];
    pplntArray[0] = intArray1; // 배열의 이름은 포인터로서 사용됨
    pplntArray[1] = intArray2;
    pplntArray[2] = intArray3;

    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            cout << pplntArray[i][j] << "\t";
            cout << endl;
        }
    }
    delete [] pplntArray;
}
