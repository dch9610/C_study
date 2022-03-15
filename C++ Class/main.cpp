#include <iostream>
using namespace std;
const int ROW_SIZE=3;
const int COLUMN_SIZE = 5;

int main(){
    int intArrayA[ROW_SIZE][COLUMN_SIZE];
    for (int i =0; i<ROW_SIZE; i++) {
        for(int j=0; j<COLUMN_SIZE; j++){
            intArrayA[i][j] = i+j;
        }
    }

    // 인덱스를 이용한 접근
    cout << intArrayA[0][2] << " " << intArrayA[1][2] << "\n";
    cout << *(intArrayA+2) << " " << *(intArrayA+(COLUMN_SIZE*1)+2) << "\n";
}