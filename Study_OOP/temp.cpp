#include <iostream>

class test {
public:
	int var = 10;

	test(int given) : var(given) {}
};

int main() {
	test ins = 10;

	std::cout << ins.var;
}