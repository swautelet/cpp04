# include "Cat.hpp"
# include "Dog.hpp"
# include "WrongCat.hpp"

int main()
{
	int size = 4;
	Animal *test[size];
	// Animal wrong;

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
	Cat test3 = test2;
	std::cout << test1.getBrain() << std::endl;
	std::cout << test2.getBrain() << std::endl;
	std::cout << test3.getBrain() << std::endl;
	for (int i = 0; i < size; i++)
	{
		test[i]->makeSound();
		std::cout << test[i]->getBrain() << std::endl;
	}
	for (int i = 0; i < size; i++)
	{
		test[i]->getBrain()->showthoughts();
		delete test[i];
	}
}