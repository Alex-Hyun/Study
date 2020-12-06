#include <iostream>

class moveConstruct {
private:
	int var;

public:
	moveConstruct(int givenVar) : var(givenVar) {} // 기본 생성자
	moveConstruct(moveConstruct&& a) noexcept { //이동 생성자
		var = a.var;
	}
	moveConstruct(const moveConstruct& b) { //복사 생성자
		var = b.var;
	}

	void print() {
		std::cout << var << std::endl;
	}
};

int main() {

	moveConstruct first(10);
	first.print();
	moveConstruct second(first);
	first.print();
	second.print();
	moveConstruct third(std::move(first));

	first.print();
	second.print();
	third.print();






	return 0;
}