# include "Cat.hpp"
# include "Dog.hpp"
# include "WrongCat.hpp"

int main()
{
	int size = 4;
	Animal *test[size];
	// Animal derp;

	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 0)
			test[i] = new Cat();
		else
			test[i] = new Dog();
	}
	for (int i = 0; i < size; i++)
	{
		test[i]->makeSound();
	}
	for (int i = 0; i < size; i++)
	{
		delete test[i];
	}
}