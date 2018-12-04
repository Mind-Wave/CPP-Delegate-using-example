#include <iostream>
#include <functional>
#include "Delegate.h"

void SayHello();

int main()
{
	//Old delegate creation approach
	Delegate func = SayHello;
	func();

	//Modern approach using lambda expressions!
	std::function<void()> f_display = [] {	std::cout << "Hello world!" << std::endl;	};
	f_display();
	return 0;
}


void SayHello()
{
	std::cout << "Hello world!" << std::endl;
}