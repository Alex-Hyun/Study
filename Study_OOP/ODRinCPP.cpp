#include <iostream>

class testStatic {
private:
	static int test;
public:
	void print() {
		std::cout << test << std::endl;
		test++;
	}
};

//Static 변수의 초기화
int testStatic::test = 0;

int main() {

	
	testStatic instance;
	instance.print();

	testStatic instance2;
	instance2.print();

	return 0;
}