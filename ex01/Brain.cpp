#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "New Brain created" << std::endl;
	this->ideas[0] = "randomthougths 0 ";
	this->ideas[1] = "i like ice cream ";
	this->ideas[2] = " miaw ";
	this->ideas[3] = " wouf ";
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
	Brain *temp = new Brain();
	for (int i = 0; i < 100; i++)
	{
		temp->ideas[i] = copi.ideas[i];
	}
	std::cout << "Brain has been copied!" << std::endl;
	return(*temp);
}

Brain::~Brain()
{
	std::cout << "A Brain has been destroyed!" << std::endl;
}

void	Brain::showthoughts()
{
	for (int i = 0; i < 4; i++)
	{
		std::cout << this->ideas[i] << " ";
	}
	std::cout << std::endl;
}