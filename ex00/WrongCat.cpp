# include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "An animal type " << this->type << " has been created!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copi)
{
	this->type = copi.type;
	std::cout << "An animal type " << this->type << " has been born from another one!" << std::endl;
}

WrongCat& WrongCat::operator =(const WrongCat& copi)
{
	this->type = copi.type;
	std::cout << "An animal type " << this->type << " has been copied from another one!" << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "An animal type " << this->type << " has died!" << std::endl;
	return ;
}

void	WrongCat::makeSound()
{
	std::cout << "wrongmiaouuuu wrongmiaou wrongmiaou wrongmiaouuuuuuuuuuuuuu! " << std::endl;
}
