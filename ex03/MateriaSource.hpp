#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource:public IMateriaSource{
	public:
		MateriaSource();
		~MateriaSource();
		void	learnMateria(AMateria* next);
		AMateria*	createMateria(std::string const& type);

	private:
		AMateria* inv[4];

	protected:
	
};

#endif