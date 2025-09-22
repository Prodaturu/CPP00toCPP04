#include <iostream>
#include <string>
#include "person.hpp"


int main()
{
    Pet Donkey;
	Pet Rat;

	Donkey.set_info("Jesus", 2025);
	Rat.set_info("Mohammed", 2040);
	
	Donkey.printInfo();
	Rat.printInfo();

	return 0;
}