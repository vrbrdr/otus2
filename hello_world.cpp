#include "example.h"

#include <iostream>

void todo_move_me_out() {
	std::cout << "This function should be located in the separated source file" << std::endl;
}

using std::cout;

int main() {
	std::cout << "Hello, World!" << std::endl;

	int a{1}, b{2}, c{3};
	cout << a << ", " << "b, " << "c";
	example_function();
	todo_move_me_out();
	
	return 0;
}