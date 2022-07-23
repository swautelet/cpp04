#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character:public ICharacter{
	public:
		Character();
		Character(std::string name);
		Character(const Character& copi);
		Character& operator =(const Character& copi);
		~Character();
		std::string const& getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:
		static const int inv_size = 4;
		static const int floor_size = 1000;
		AMateria* inventory[inv_size];
		AMateria* floor[floor_size];
		std::string _name;

	protected:

};

#endif