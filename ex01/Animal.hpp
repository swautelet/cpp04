#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include<iostream>
#include<string>
#include "Brain.hpp"

class Animal{
	public:
		Animal();
		Animal(const Animal& copi);
		virtual Animal& operator =(const Animal& copi);
		virtual ~Animal();
		virtual void makeSound();
		virtual	Brain* getBrain();

	private:

	protected:
		std::string type;
};

#endif