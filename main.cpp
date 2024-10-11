#include <iostream>

int main() {
//	std::cout << "Hello world!" << std::endl;
//
//	int age {15};
//	std::cout << "ur age = " << age << "\n";

	bool isAlive{true};
	// Значение по умолчанию для переменных этого типа - false.
	bool isDead{false};
	
	std::cout << "isAlive " << isAlive << std::endl;
	std::cout << "isDead " << isDead << std::endl;
	
	
	int a = 2;
	std::cout << "a = " << a << std::endl;
	a = 3;
	std::cout << "a = " << a << std::endl;
	a = 4;
	std::cout << "a = " << a << std::endl;

	// Константы
	const int n {24};
	std::cout << "Age = " << n << std::endl;
	n {12};

	return 0; 
}