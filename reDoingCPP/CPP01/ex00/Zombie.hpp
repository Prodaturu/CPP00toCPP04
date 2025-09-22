#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string _name;

	public:

/* --- Constructors and Destructor --- */

	// Default constructor
	Zombie();
	// Constructor with name
	Zombie(std::string name);
	// Destructor
	~Zombie();


/* --- Helper Functions --- */

	// Function to announce zombie's name
	void	announce(void);

	// Function to set name of a zombie.
	void	setName(std::string name);
};

/* --- Stand alone functions --- */

// 1. Create new Zombie on heap & return it's pointer
Zombie* 	newZombie( std::string name );

// 2. Creates new Zombie on stack & announce itself
void		randomChump( std::string name );


#endif