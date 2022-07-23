#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria{
	public:
		Ice();
		~Ice();
		Ice(const Ice& copi);
		Ice& operator =(const Ice& copi);
		AMateria* clone() const;
		void	use(ICharacter& target);

	private:

	protected:
	
};

#endif