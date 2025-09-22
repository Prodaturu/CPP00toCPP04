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

        // constructor
        Pet(): name(""), age(0) {};

        Pet(std::string n, int a)
        {
            name = n;
            age = a;
        };

        // Destructor
        ~Pet()
        {
            std::cout << "destructor called for " << name << " class;\n";
        };

		void set_info(const std::string& n, int a)
		{
			name = n;
			age = a;
		};

		void printInfo() const
		{
			std::cout << "Pet Name: " << name << ",\nAge: " << age << "\n" << std::endl;
		};

};

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

#endif