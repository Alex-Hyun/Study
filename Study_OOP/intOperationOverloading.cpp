#include <iostream>


class MyInt {
	
public:
	int data;
	MyInt(int data) : data(data) {} // default Const.
	MyInt(const MyInt& i) : data(i.data) { // Copy Const.
		std::cout << "copy constructor" << std::endl;
	}
	//Conversion operator
	operator int() { return data; }
};


int main() {
	MyInt a = 77;
	int b = a + 33;
	MyInt c = b;
	//MyInt d = c;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	c = 77 + b + a * 2;
	std::cout << c << std::endl;

	return 0;
}