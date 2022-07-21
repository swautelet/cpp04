#include "MateriaSource.hpp"

MateriaSource::MateriaSource():IMateriaSource()
{
	for (int i = 0; i < inv_size; i++)
	{
		inv[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < inv_size; i++)
	{
		if (inv[i])
		{
			delete(inv[i]);
		}
	}
}

void	MateriaSource::learnMateria(AMateria* next)
{
	for (int i = 0; i < inv_size; i++)
	{
		if (inv[i] == NULL)
		{
			inv[i] = next->clone();
			std::cout << "Materia type " << next->getType() << " learned!" << std::endl;
			return ;
		}
	}
	std::cout << "No more place to learn materia!" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < inv_size; i++)
	{
		if (type.compare(inv[i]->getType()) == 0)
		{
			std::cout << "New Materia type " << inv[i]->getType() << " created!" << std::endl;
			return (inv[i]->clone());
		}
	}
	std::cout << "No materia type " << type << " found!" << std::endl;
	return (NULL);
}