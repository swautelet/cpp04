#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal{
	public:
		Cat();
		Cat(const Cat& copi);
		Cat& operator =(const Cat& copi);
		~Cat();
		void makeSound();

	private:
	
	protected:

};

#endif