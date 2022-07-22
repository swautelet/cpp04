#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include<iostream>
#include<string>

class Animal{
	public:
		Animal();
		Animal(const Animal& copi);
		Animal& operator =(const Animal& copi);
		virtual ~Animal();
		virtual void makeSound() = 0;
		
	private:

	protected:
		std::string type;
};

#endif