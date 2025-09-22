/** Const Members and Const methods */

/** Const data Members
 *
 * 1. Declared with "const type memberName"
 * 2. Must be initialized within cunstructor list
 *	  Can not be modified or assigned in body
 * 3. Useful to show immutability for that instance (example: ID)
 *
 */

/** Const Member Functions
 * 1. Declared with a const after parameter list: "int getX() const"
 * 2. shows the function wont modify the observable state of the object
 * 3. Can be called on const objects and temporaries
 * 4. Inside a const member function, "this" is a "const Type*",
 * 	so we cant modify non mutable members.
 *
 */

#include <iostream>
#include <string>

class Pet
{
	const std::string species;
	std::string name;
	int age;
	// mutable member declaration (no in-class initializer for C++98)
	mutable int accessCount;

public:
	Pet(const std::string &sp, std::string n, int a)
		: species(sp), name(n), age(a), accessCount(0) {}

	// const std::string& getSpecies() const { return species;}

	void printInfo() const
	{
		// record access even though this method is const
		accessed();
		std::cout << "Pet Name: " << name << ",\nAge: " << age << "\nSpecies: " << species
				  << "\nAccessCount: " << accessCount << "\n"
				  << std::endl;
	}

	int modifyAge(int a)
	{
		age = a;
		return age;
	}

	// Intentional: attempt to modify inside a const method (should cause compile error)
	// void tryModifyConst() const { age = age + 1; }

	const std::string &getSpecies() const { return species; }

	// mutable example: this member can be modified even in const methods

	void accessed() const { ++accessCount; }
};

/**
 * 1. getSpicies() returns const-ref and is itself const,
 * so it can be called on const objects of Pet class
 */

int main()
{
	Pet messenger("Abraham", "Mohammed", 13);
	Pet priest("Jesus", "Jesus", 12);

	std::string a = messenger.getSpecies();
	std::string b = priest.getSpecies();

	priest.modifyAge(11);

	std::cout << "Species are:\n\n"
			  << a << "\n"
			  << b << std::endl;

	return 0;
}
