#include <iostream>
#include <limits>
#include <string>
#include <algorithm>
using namespace std;

int int_limit(){
    cout << numeric_limits<int>::max() << " " << numeric_limits<int>::min() << "\n";
}

long long_limit(){
    cout << numeric_limits<long long>::max() << " " << numeric_limits<long long>::min() << "\n";
}

float float_limit(){
    cout << numeric_limits<float>::max() << " " << numeric_limits<float>::min() << "\n";
}

double double_limit(){
    cout << numeric_limits<double>::max() << " " << numeric_limits<double>::min() << "\n";
}

int main(){
    string type_name;
    int int_count = 0, long_count=0, float_count=0, double_count=0;
    cin >> type_name;
    while(type_name != "quit"){
        transform(begin(type_name), end(type_name), begin(type_name),[](unsigned char c){
            return tolower(c);
        });

        if(type_name == "int"){
            int_limit();
            int_count += 1;
            cin >> type_name;
        }
        else if(type_name=="long"){
            long_limit();
            long_count += 1;
            cin >> type_name;
        }
        else if(type_name=="float"){
            float_limit();
            float_count += 1;
            cin >> type_name;
        }
        else if(type_name=="double"){
            double_limit();
            double_count += 1;
            cin >> type_name;
        }
        else{
            cout << "vector" << "\n";
            cout << "Invalid Command" << "\n";
            cin >> type_name;
        }

    }
    cout << "=== the number of types ===" << "\n";
    cout << "int: " << int_count << "\n" << "long: " << long_count << "\n";
    cout << "float: " << float_count << "\n" << "double: " << double_count <<endl;
}