#include "Animal.hpp"

Animal::Animal():type("random Animal")
{
	std::cout << "A new random animal is born!" << std::endl;
	return;
}

Animal::Animal(const Animal& copi)
{
	std::cout << "A new animal is born form another one!" << std::endl;
	this->type = copi.type;
}

Animal& Animal::operator =(const Animal& copi)
{
	std::cout << "An animal type has been copied!" << std::endl;
	this->type = copi.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "A random animal is dead!" << std::endl;
}

void	Animal::makeSound()
{
	std::cout << "Random animal sounds!" << std::endl;
}

Brain* Animal::getBrain()
{
	return (NULL);
}