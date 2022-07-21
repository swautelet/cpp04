#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class Character:public ICharacter{
	public:
		Character();
		Character::Character(std::string name);
		~Character();
		std::string const& getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:
		static const int inv_size = 4;
		AMateria* inventory[inv_size];
		std::string _name;

	protected:

};

#endif