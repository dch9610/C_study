#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> vInt{1,2,3,4,5};

    random_shuffle(vInt.begin(), vInt.end());
    for(const int& v:vInt){
        cout << v << "\t";
    }
    cout << endl;

    auto largest = max_element(vInt.cbegin(), vInt.cend()-1);
    cout << "max_: " << *largest << endl;
    cout << "loaction_: " << largest -vInt.cbegin() << endl;

    sort(vInt.begin(), vInt.end());

    // auto의 경우 const를 위해서 cbegin(), cend()를 사용함
    for(auto it=vInt.cbegin(); it!=vInt.cend(); it++){
        cout << *it << "\t";
    }
    cout <<endl;

    auto largest1 = max_element(vInt.cbegin(), vInt.cend());
    cout << "max_: " << *largest1 << endl;
    cout << "loaction_: " << largest1 -vInt.cbegin() << endl;


}