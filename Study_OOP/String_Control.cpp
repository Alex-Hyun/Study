#include <iostream>

using namespace std;


// �Ű������� const�� ������ ������ ���ڿ��� ������ �� �ִ�.

void func_1(char* c) {
	//strcpy�� ����ϸ� ������ \0���� ��� ����ȴ�.
	strcpy_s(c, 6, "Hello");

	cout << c << endl; // Hello

	// \0�� !�� �ٲٸ� ���ڿ��� �̾ ��µȴ�.
	*(c + 5) = '!';

	cout << c << endl; // Hello! C++
}

int main() {
	char str[] = "Hello, C++";
	func_1(str);

	return 0;
}