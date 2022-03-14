#include <iostream>
using namespace std;

int main(){
    int SIZE=0;
    cin >> SIZE;
    int *arr = new int[SIZE];

    for(int i=0; i<SIZE; i++){
        cin >> arr[i];
    }

    int SEARCH = 0;
    cin >> SEARCH;
    cout << arr[arr[SEARCH]];
    delete [] arr;
}