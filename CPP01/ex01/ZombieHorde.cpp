#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie* Horde = new (std::nothrow) Zombie[N];

	for (int i = 0; i < N; i++)
		Horde[i].set_name(name);
	return (Horde);	
}
