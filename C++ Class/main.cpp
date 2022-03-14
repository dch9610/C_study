#include <iostream>
#include <memory>
using namespace std;

void cal(int *a, int *b){
    int sum = (*a) + (*b);
    int sub = (*a) - (*b);
    *a = sum;
    *b = sub;
}

int main(){
    unique_ptr<int> a = unique_ptr<int> {new int{}};
    unique_ptr<int> b {new int {}};

    cin >> *a >> *b;
    cal(a.get(),b.get());
    cout << *a << endl;
    cout << *b << endl;
}