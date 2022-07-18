#include "Animal.hpp"

Animal::Animal():type("random Animal")
{
	std::cout << "A new random animal is born!" << std::endl;
	return;
}

Animal::Animal(const Animal& copi)
{
	this->type = copi.type;
}

Animal& Animal::operator =(const Animal& copi)
{
	this->type = copi.type;
}

Animal::~Animal()
{

}

void	Animal::makeSound()
{
	std::cout << "Random animal sounds!" << std::endl;
}