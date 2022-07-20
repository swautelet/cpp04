#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "New Brain created" << std::endl;
}

Brain::Brain(const Brain& copi)
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = copi.ideas[i];
	}
	std::cout << "Brain has been copied!" << std::endl;
}

Brain& Brain::operator =(const Brain& copi)
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = copi.ideas[i];
	}
	std::cout << "Brain has been copied!" << std::endl;
	return(*this);
}

Brain::~Brain()
{
	std::cout << "A Brain has been destroyed!" << std::endl;
}
