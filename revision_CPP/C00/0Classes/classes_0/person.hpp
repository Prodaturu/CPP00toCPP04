#ifndef PERSON_HPP
#define PERSON_HPP

#include <iostream>
#include <string>

class Pet
{
	private:
		std::string name;
		int age;

	public:
		void set_info(const std::string& n, int a)
		{
			name = n;
			age = a;
		}

		void printInfo() const
		{
			std::cout << "Pet Name: " << name << ",\nAge: " << age << "\n" << std::endl;
		}
};

#endif