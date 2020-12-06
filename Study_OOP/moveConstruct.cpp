#include <iostream>

class moveConstruct {
private:
	int var;

public:
	moveConstruct(int givenVar) : var(givenVar) {} // �⺻ ������
	moveConstruct(moveConstruct&& a) noexcept { //�̵� ������
		var = a.var;
	}
	moveConstruct(const moveConstruct& b) { //���� ������
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