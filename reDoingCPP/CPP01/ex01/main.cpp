#include "Zombie.hpp"

int main()
{
	// Create a Zombie on heap memory
	Zombie* heapZombie = new Zombie("HeapZombie");

	// Create a Zombie on stack memory
	Zombie stackZombie("StackZombie");

	// Announce both zombies
	heapZombie->announce();
	stackZombie.announce();

	// Clean up heap memory
	delete heapZombie;

	return 0;
}
