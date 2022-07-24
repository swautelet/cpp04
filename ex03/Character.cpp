#include "Character.hpp"

Character::Character():_name("default name")
{
	for (int i = 0; i < inv_size; i++)
	{
		inventory[i] = NULL;
	}
	for (int i = 0; i < floor_size; i++)
	{
		floor[i] = NULL;
	}
}

Character::Character(std::string name):_name(name)
{
	for (int i = 0; i < inv_size; i++)
	{
		inventory[i] = NULL;
	}
	for (int i = 0; i < floor_size; i++)
	{
		floor[i] = NULL;
	}
}

Character::Character(const Character& copi)
{
	this->_name = copi._name;
	for (int i = 0; i < inv_size; i++)
	{
		inventory[i] = NULL;
	}
	for (int i = 0; i < floor_size; i++)
	{
		floor[i] = NULL;
	}
	for (int i = 0; i < inv_size; i++)
	{
		if (copi.inventory[i])
			inventory[i] = copi.inventory[i]->clone();
	}
}

Character& Character::operator =(const Character& copi)
{
	this->_name = copi._name;
	for (int i = 0; i < inv_size; i++)
	{
		if (inventory[i])
			delete(inventory[i]);
		if (copi.inventory[i])
			inventory[i] = copi.inventory[i]->clone();
	}
	for (int i = 0; i < floor_size; i++)
	{
		if (floor[i])
			delete(floor[i]);
	}
	return(*this);
}

Character::~Character()
{
	for (int i = 0; i < inv_size; i++)
	{
		if (inventory[i])
		{
			delete (inventory[i]);
		}
	}
	for (int i = 0; i < floor_size; i++)
	{
		if (floor[i])
		{
			delete (floor[i]);
		}
	}
}

std::string const& Character::getName() const
{
	return(this->_name);
}

void	Character::equip(AMateria* m)
{
	int i = 0;
	while(i < inv_size)
	{
		if (inventory[i] == NULL)
			break;
		i++;
	}
	if (i == inv_size)
	{
		std::cout << "Inventory full can't equip another materia!" << std::endl;
		for (int i = 0; i < floor_size; i++)
		{
			if (floor[i] == NULL)
			{
				floor[i] = m;
				break ;
			}
			else if (i == floor_size - 1 && floor[floor_size - 1])
			{
				std::cout << "No place left on the floor to drop materia i can't equip!" << std::endl;
				delete (m);
				return ;
			}
		}
		return ;
	}
	else
	{
		std::cout << "Materia equiped in the slot numero " << i << std::endl;
		inventory[i] = m;
	}
}

void	Character::unequip(int idx)
{
	if (idx >= inv_size)
	{
		std::cout << "My inventory is not that large i can't unequip this materia" << std::endl;
		return ;
	}
	else
	{
		if (inventory[idx] == NULL)
		{
			std::cout << "I have no materia equiped at this slot!" << std::endl;
		}
		else
		{
			
			for (int i = 0; i < floor_size; i++)
			{
				if (floor[i] == NULL)
				{
					floor[i] = inventory[idx];
					break ;
				}
				else if (i == floor_size - 1 && floor[floor_size - 1])
				{
					std::cout << "No place left on the floor to unequip materia!" << std::endl;
					return ;
				}
			}
			std::cout << "I unequiped the materia number " << idx << std::endl;
			inventory[idx] = NULL;
		}
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= inv_size)
	{
		std::cout << "This is not a valid slot i can't use it" << std::endl;
	}
	else if (inventory[idx])
	{
		inventory[idx]->use(target);
	}
	else
	{
		std::cout << "I have no materia to use in this slot" << std::endl;
	}
}