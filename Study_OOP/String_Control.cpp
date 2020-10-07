#include <iostream>

using namespace std;


// 매개변수에 const를 붙이지 않으면 문자열을 수정할 수 있다.

void func_1(char* c) {
	//strcpy를 사용하면 마지막 \0까지 모두 복사된다.
	strcpy_s(c, 6, "Hello");

	cout << c << endl; // Hello

	// \0을 !로 바꾸면 문자열이 이어서 출력된다.
	*(c + 5) = '!';

	cout << c << endl; // Hello! C++
}

int main() {
	char str[] = "Hello, C++";
	func_1(str);

	return 0;
}