/**
 * Static Data member: a value shared by all instances of the class.
 * This demo shows a static counter that stores the total length of all names.
 */

#include <string>
#include <iostream>

class PetLen
{
private:
	// shared across all PetLen objects
	static int totalLen;
	// immutable per instance
	const std::string name;

public:
	// constructor: initialize name and add its length to the shared counter
	PetLen(const std::string &n) : name(n) { totalLen += (int)name.length(); }

	// destructor: subtract this instance's name length
	~PetLen() { totalLen -= (int)name.length(); }

	// static getter and setter
	static int getCount() { return totalLen; }
	static void setCount(int v) { totalLen = v; }

	// Note: static methods cannot use instance members (no `this`), so the
	// following would be an error if uncommented:
	// static void bad() { std::cout << name; }
};

// define the static member
int PetLen::totalLen = 0;

int main()
{
	std::cout << "Total length start: " << PetLen::getCount() << "\n";

	// create some objects in the current scope
	PetLen a("Abraham");
	PetLen b("Jesus");
	std::cout << "After creating a,b: " << PetLen::getCount() << "\n";

	// block scope demo: create an object that will be destroyed at block end
	{
		PetLen blockPet("Block");
		std::cout << "Inside block after creating blockPet: " << PetLen::getCount() << "\n";
	} // blockPet destroyed here -> destructor runs

	std::cout << "After block (blockPet destroyed): " << PetLen::getCount() << "\n";

	// show setter usage (temporarily change and restore)
	int saved = PetLen::getCount();
	PetLen::setCount(100);
	std::cout << "Temporarily set to: " << PetLen::getCount() << "\n";
	PetLen::setCount(saved);
	std::cout << "Restored back to: " << PetLen::getCount() << "\n";

	return 0;
}
