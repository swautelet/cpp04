#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal{
	public:
		Dog();
		Dog(const Dog& copi);
		virtual Dog& operator =(const Dog& copi);
		virtual ~Dog();
		virtual void makeSound();
		virtual Brain* getBrain();
		
	private:
		Brain *_brain;

	protected:

};

#endif