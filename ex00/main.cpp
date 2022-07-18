# include "Cat.hpp"
# include "Dog.hpp"
# include "WrongCat.hpp"

int main()
{
	Animal ta;
	Dog	td;
	Cat	tc;
	WrongAnimal twa;
	WrongCat	twc;

	ta.makeSound();
	td.makeSound();
	tc.makeSound();
	twa.makeSound();
	twc.makeSound();
}