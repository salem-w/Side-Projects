#include <iostream>
#include <math.h>

int main() {

	for(int i = 1; i <= 100; i++) {

		if(!(i % 15))
			std::cout << "FizzBuzz!\n";

		else if(!(i % 3))
			std::cout << "Fizz\n";

		else if(!(i % 5))
			std::cout << "Buzz\n";

		else
			std::cout << i << std::endl;
	}

	return 0;
}