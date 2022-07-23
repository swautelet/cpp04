# include "Cat.hpp"

Cat::Cat():Animal()
{
	this->type = "Cat";
	std::cout << "An animal type " << this->type << " has been created!" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(const Cat& copi)
{
	this->_brain = new Brain();
	this->type = copi.type;
	*this->_brain = *copi._brain;
	std::cout << "An animal type " << this->type << " has been born from another one!" << std::endl;
}

Cat& Cat::operator =(const Cat& copi)
{
	this->type = copi.type;
	*this->_brain = *copi._brain;
	std::cout << "An animal type " << this->type << " has been copied from another one!" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "An animal type " << this->type << " has died!" << std::endl;
	delete this->_brain;
	return ;
}

void	Cat::makeSound()
{
	std::cout << "miaouuuu miaou miaou miaouuuuuuuuuuuuuu! " << std::endl;
}

Brain* Cat::getBrain()
{
	return((this->_brain));
}