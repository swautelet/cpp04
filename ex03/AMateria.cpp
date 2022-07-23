#include "AMateria.hpp"

AMateria::AMateria(std::string const& type):_type(type)
{

}

AMateria::~AMateria()
{

}

AMateria::AMateria(const AMateria& copi)
{
	this->_type = copi._type;
}

AMateria& AMateria::operator =(const AMateria& copi)
{
	this->_type = copi._type;
	return (*this);
}

std::string const&	AMateria::getType() const
{
	return(this->_type);
}

AMateria::AMateria():_type("nonsense")
{

}

AMateria* AMateria::clone() const
{
	return (NULL);
}

void AMateria::use(ICharacter& target)
{
	(void) target;
}