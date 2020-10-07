#include <iostream>

using namespace std;

void func_1(char* c) {
	strcpy_s(c, 6, "Hello");

	cout << c << endl;

	*(c + 5) = '!';

	cout << c << endl;
}

int main() {
	char str[] = "Hello, C++";
	func_1(str);

	return 0;
}