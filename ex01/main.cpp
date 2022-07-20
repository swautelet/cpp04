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
	for (int i = 0; i < size; i++)
	{
		test[i]->makeSound();
	}
	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 0)
			dynamic_cast<Cat *>(test[i])->getBrain().showthoughts();
		else
			dynamic_cast<Dog *>(test[i])->getBrain().showthoughts();
		delete test[i];
	}
}