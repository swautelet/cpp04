#include "AMateria.hpp"

AMateria::AMateria(std::string const& type):_type(type)
{

}

AMateria::~AMateria()
{

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