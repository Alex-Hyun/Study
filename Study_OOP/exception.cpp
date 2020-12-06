#include <iostream>

int func() {
	throw std::exception("HO");
}

int main() {

	try {
		func();
	}
	catch (std::exception& e) { // & 없어도 정상 작동, but 있으면 복사해오지 않으므로 성능 향상
		std::cout << e.what() << std::endl;

	}
}