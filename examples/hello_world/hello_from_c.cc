#include <iostream>

#include <stdio.h>

extern "C" {

void say_something() {
	printf("Hello c++\n");
	std::cout << "Hello from C++!" << std::endl;
}

}
