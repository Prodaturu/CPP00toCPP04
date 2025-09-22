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
	// Create a Zombie on stack memory (i.e. block scoped)
	Zombie	tempZombie(name);

	// Announce name of Zombie created
	tempZombie.announce();

	return ;
}
