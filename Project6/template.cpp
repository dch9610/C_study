#include <iostream>
#include <string>

using namespace std;

// 데이터 클래스 템플릿
template <typename T>
class Data {
private:
	T data;
public:
	Data(T data) : data(data) { }
	void setData(T data) {
		this->data = data;
	}
	T getData{
		return data;
	}
};

int main(void) {
	Data<int> data1(2);
	Data<string> data2("이순신");
	cout << data1.getData() << ":" << data2.getData() << "\n";
}