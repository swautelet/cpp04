# include "Cat.hpp"
# include "Dog.hpp"
# include "WrongCat.hpp"

int main()
{
	Animal *test[10];

	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			test[i] = new Cat();
		else
			test[i] = new Dog();
	}
	for (int i = 0; i < 10; i++)
	{
		test[i]->makeSound();
	}
	// Cat deep (*test[0]);
	for (int i = 0; i < 10; i++)
	{
		delete test[i];
	}
}