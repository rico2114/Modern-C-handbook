#include <iostream>

class Data {
public:
	Data() {
		std::cout << "Data default constructor." << std::endl;
	}

	Data(int data) : data_(data) {
		std::cout << "Data non default constructor." << std::endl;
	}

	~Data() {
		std::cout << "Data destructor." << std::endl;
	}
	int data_;
};

Data ReturnData() {
	Data data(10);
	std::cout << "The local field of Data created in ReturnData points to "
		<< &data << std::endl;
	return data;
}

int main() {
	Data data;
	std::cout << "The pointer of data is: " << &data << std::endl;
	data = ReturnData();
	// The data at this point is destructed (first coppied and then destructed.)
	std::cout << "Data fully returned with value: " << data.data_ << "." << std::endl;
	return 0;
}
