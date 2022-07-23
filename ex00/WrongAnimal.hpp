#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include<iostream>
#include<string>

class WrongAnimal{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& copi);
		WrongAnimal& operator =(const WrongAnimal& copi);
		virtual ~WrongAnimal();
		void makeSound();
		
	private:

	protected:
		std::string type;
		
};

#endif