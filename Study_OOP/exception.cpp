#include <iostream>

int func() {
	throw std::exception("HO");
}

int main() {

	try {
		func();
	}
	catch (std::exception& e) { // & ��� ���� �۵�, but ������ �����ؿ��� �����Ƿ� ���� ���
		std::cout << e.what() << std::endl;

	}
}