/*
 * This program takes a string as input and reverses the string.
 * The user must include the string as an argument when running the program.
 */

#include <iostream>
#include <string>


int main(int argc, char const *argv[])
{
	std::string str = "";
	if(argc > 1) {
		for(int i = 1; i < argc; i++)
		str = str + " " + argv[i];
	}
	else {
		std::cout << "Type the string you want to reverse." << std::endl;
		getline(std::cin, str);
	}

	int len = str.length();

	for(; len >= 0; len--) {
		std::cout << str[len];
	}
	std::cout << std::endl;

	return 0;
}