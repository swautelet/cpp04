#include"Ice.hpp"

Ice::Ice():AMateria("ice")
{

}

Ice::~Ice()
{

}

Ice::Ice(const Ice& copi):AMateria(copi)
{

}

Ice& Ice::operator= (const Ice& copi)
{
	this->_type = copi._type;
	return (*this);
}

AMateria* Ice::clone() const
{
	AMateria* ret = new Ice();
	return (ret);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}