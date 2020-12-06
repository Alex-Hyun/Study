#include <iostream>
#include <vector>

int main() {

	std::vector<int> vec;

	using iterator = std::vector<int>::iterator;

	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);

	for (iterator itr = vec.begin(); itr != vec.end(); itr++) {
		std::cout << *itr << std::endl;
	}

	for (int c = 0; c < 10; c++) {
		std::cout << c << ' ';
	}
}