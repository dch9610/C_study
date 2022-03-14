#include <iostream>
#include <memory>
#include <string>
#include <tuple>
using namespace std;

typedef tuple <string, int> tuple1;

auto sum(int a, int b){
    return tuple1{"sum: ",a+b};
}

int main() {
    auto pa = make_unique<int>(1);
    auto pb = make_unique<int>(2);

    cout << *pa << ", " << *pb << endl;
    auto my_swap = [](auto a, auto b) {
        auto temp = *a;
        *a = *b;
        *b = temp;
    };
    my_swap(pa.get(), pb.get());
    cout << "a:" << *pa << ",b:" << *pb << endl;
    auto [label, result] = sum(*pa, *pb);
    cout << label << result << endl;
}