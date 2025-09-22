#include "Zombie.hpp"
#include <iostream>

void	setName(std::string name)
{
	(void) name;
	return ;
}

/* --- Constructors and Destructor --- */


/* --- Stand alone Functions --- */

// Function to 
void randomChump(std::string name)
{
	// Create a Zombie on scope memory (i.e. stack)
	Zombie	tempZombie;

	tempZombie.setName(name);
	tempZombie.announce();

	return ;
}
