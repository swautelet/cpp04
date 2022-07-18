# include "Dog.hpp"

Dog::Dog():Animal()
{
	this->type = "Dog";
	std::cout << "An animal type " << this->type << " has been created!";
}

Dog::Dog(const Dog& copi)
{
	this->type = copi.type;
	std::cout << "An animal type " << this->type << " has been born from another one!" << std::endl;
}

Dog& Dog::operator =(const Dog& copi)
{
	this->type = copi.type;
	std::cout << "An animal type " << this->type << " has been copied from another one!" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "An animal type " << this->type << " has died!";
	return ;
}

void	Dog::makeSound()
{
	std::cout << "wouf wouf ahouuuuuuuuh ahouhh aouhaouh! " << std::endl;
}
