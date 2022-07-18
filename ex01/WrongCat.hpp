#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
	public:
		WrongCat();
		WrongCat(const WrongCat& copi);
		WrongCat& operator =(const WrongCat& copi);
		~WrongCat();
		void makeSound();

	private:

	protected:
		
};

#endif