#include "Zombie.hpp"
#include <iostream>

Zombie*	newZombie(std::string name)
{
	Zombie	*newZombie;

	// Allocate memory for a Zombie class and assign it to newZombie var
	newZombie = new Zombie(name);

	// Return the allocated Zombie class
	return (newZombie);
}
