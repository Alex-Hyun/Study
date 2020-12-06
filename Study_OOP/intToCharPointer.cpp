#include <iostream>

int main() {
	int a = 10;
	int arr[10] = { 1,2,3,4,5 };
	void* void_pointer = static_cast<void*>(arr);
	char* char_pointer = static_cast<char*>(void_pointer);

	std::cout << *(int*)(char_pointer+8) << std::endl;

	return 0;
}