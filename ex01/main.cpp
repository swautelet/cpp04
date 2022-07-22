# include "Cat.hpp"
# include "Dog.hpp"
# include "WrongCat.hpp"

int main()
{
	int size = 4;
	Animal *test[size];

	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 0)
			test[i] = new Cat();
		else
			test[i] = new Dog();
	}
	Cat test1;
	Cat test2;
	test1 = test2;
	for (int i = 0; i < size; i++)
	{
		test[i]->makeSound();
	}
	for (int i = 0; i < size; i++)
	{
		test[i]->getBrain()->showthoughts();
		delete test[i];
	}
}