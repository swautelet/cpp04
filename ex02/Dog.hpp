#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal{
	public:
		Dog();
		Dog(const Dog& copi);
		Dog& operator =(const Dog& copi);
		~Dog();
		void makeSound();
		
	private:
		Brain *_brain;

	protected:

};

#endif