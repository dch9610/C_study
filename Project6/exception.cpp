#include <iostream>

using namespace std;

template <typename T>
class Data {
private:
	T data;
public:
	// 
	Data(T data) : data(data){ }
	T getData() {
		return data;
	}
	Data<T> operator /(const Data<T>& other) {
		if (other.data == 0) {
			throw 0;
		}
		return Data(data / other.data);
	}

};



int main(void) {
	// a�� Data Class�� ����
	try {
		Data<int> a(7);
		Data<int> b(0);
		Data<int> result = a / b;
		cout << result.getData() << "\n";
	}
	catch (int e) {
		if (e == 0) {
			cout << "0���� ���� �� �����ϴ�.\n";
		}
	}
}