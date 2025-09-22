#ifndef PERSON_HPP
#define PERSON_HPP

#include <iostream>
#include <string>

class Pet
{
	private:
		std::string         name;
		int                 age;
		const std::string   species;

	public:

		// constructor
		Pet(): name(""), age(0), species("N/A") {};

		// --> Inline in-class constructor type <-- // 
		// Pet(std::string n, int a)
		// {
		//     name = n;
		//     age = a;
		// };

		// --> In-class with member Initializer list <-- //
		Pet(std::string& n, int a, const std::string& sp): name(n), age(a), species(sp) {};

		// Destructor
		~Pet()
		{
			std::cout << "destructor called for " << name << "'s class;\n";
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


	Pet Donkey("Jesus", 2025, "Donkey");
	Pet Rat("Mohammed", 2040, "Rat");
	
	Donkey.printInfo();
	Rat.printInfo();

	return 0;
}

#endif