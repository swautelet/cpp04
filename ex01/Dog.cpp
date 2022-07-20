# include "Dog.hpp"

Dog::Dog():Animal()
{
	this->type = "Dog";
	std::cout << "An animal type " << this->type << " has been created!" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog& copi)
{
	this->type = copi.type;
	this->_brain = copi._brain;
	std::cout << "An animal type " << this->type << " has been born from another one!" << std::endl;
}

Dog& Dog::operator =(const Dog& copi)
{
	this->type = copi.type;
	this->_brain = copi._brain;
	std::cout << "An animal type " << this->type << " has been copied from another one!" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "An animal type " << this->type << " has died!" << std::endl;
	delete this->_brain;
	return ;
}

void	Dog::makeSound()
{
	std::cout << "wouf wouf ahouuuuuuuuh ahouhh aouhaouh! " << std::endl;
}

Brain& Dog::getBrain()
{
	return(*(this->_brain));
}