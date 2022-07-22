# include "Cat.hpp"
# include "Dog.hpp"
# include "WrongCat.hpp"

int main()
{
	Animal ta;
	Dog	td;
	Cat	tc;
	WrongAnimal twa;
	WrongAnimal*	twc = new WrongCat();

	ta.makeSound();
	td.makeSound();
	tc.makeSound();
	twa.makeSound();
	twc->makeSound();
	delete(twc);
}