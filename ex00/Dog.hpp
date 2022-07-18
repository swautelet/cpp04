#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal{
	public:
		Dog();
		Dog(const Dog& copi);
		Dog& operator =(const Dog& copi);
		~Dog();
		void makeSound();
		
	private:
	
	protected:
		std::string type;

};

#endif