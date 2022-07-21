#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	for (int i = 0; i < 4; i++)
	{
		me->use(i, *bob);
	}
	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("cure"));
	me->unequip(0);
	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("ice"));
	for (int i = 0; i < 4; i++)
	{
		me->use(i, *bob);
	}
	delete bob;
	delete me;
	delete src;
	return 0;
}