#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"
class ICharacter;

class AMateria{
	public:
		AMateria(std::string const& type);
		AMateria(const AMateria& copi);
		AMateria& operator =(const AMateria& copi);
		virtual ~AMateria();
		virtual std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	private:
		AMateria();

	protected:
		std::string _type;

};

#endif