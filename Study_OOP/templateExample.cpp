#include <iostream>
#include <string>
template <typename T>
void printArgs(T t) {
	std::cout << t << std::endl;
}

template<typename T, typename...Ts>
void printArgs(T t, Ts...ts) {
	std::cout << t << std::endl;
	printArgs(ts...);
}

int main() {
	printArgs(std::string("ho"));

	printArgs(15);
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	printArgs(15, 14, 13);


}