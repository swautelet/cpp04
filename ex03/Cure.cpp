#include "Cure.hpp"

Cure::Cure():AMateria("cure")
{

}

Cure::~Cure()
{

}

Cure::Cure(const Cure& copi):AMateria(copi)
{

}

Cure& Cure::operator= (const Cure& copi)
{
	this->_type = copi._type;
	return (*this);
}

AMateria*	Cure::clone() const
{
	AMateria *ret = new Cure();
	return (ret);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}