#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain{
	public:
		Brain();
		Brain(const Brain& copi);
		Brain&	operator =(const Brain& copi);
		~Brain();

	private:
		std::string	ideas[100];

	protected:

};

#endif