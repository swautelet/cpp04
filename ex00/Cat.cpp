# include "Cat.hpp"

Cat::Cat():Animal(), type("Cat")
{

}

Cat::Cat(const Cat& copi)
{
	this->type = copi.type;
}

Cat& Cat::operator =(const Cat& copi)
{
	this->type = copi.type;
	return (*this);
}

Cat::~Cat()
{
	return ;
}

