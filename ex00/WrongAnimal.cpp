#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("random WrongAnimal")
{
	std::cout << "A new random WrongAnimal is born!" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copi)
{
	std::cout << "A new WrongAnimal is born form another one!" << std::endl;
	this->type = copi.type;
}

WrongAnimal& WrongAnimal::operator =(const WrongAnimal& copi)
{
	std::cout << "An WrongAnimal type has been copied!" << std::endl;
	this->type = copi.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "A random WrongAnimal is dead!" << std::endl;
}

void	WrongAnimal::makeSound()
{
	std::cout << "Random WrongAnimal sounds!" << std::endl;
}