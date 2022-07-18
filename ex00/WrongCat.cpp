# include "Cat.hpp"

Cat::Cat():Animal()
{
	this->type = "Cat";
	std::cout << "An animal type " << this->type << " has been created!";
}

Cat::Cat(const Cat& copi)
{
	this->type = copi.type;
	std::cout << "An animal type " << this->type << " has been born from another one!" << std::endl;
}

Cat& Cat::operator =(const Cat& copi)
{
	this->type = copi.type;
	std::cout << "An animal type " << this->type << " has been copied from another one!" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "An animal type " << this->type << " has died!";
	return ;
}

void	Cat::makeSound()
{
	std::cout << "miaouuuu miaou miaou miaouuuuuuuuuuuuuu! " << std::endl;
}
