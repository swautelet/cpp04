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
		static const int inv_size = 4;
		AMateria* inv[inv_size];

	protected:
	
};

#endif