#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal{
	public:
		Cat();
		Cat(const Cat& copi);
		virtual Cat& operator =(const Cat& copi);
		virtual ~Cat();
		virtual void makeSound();
		virtual Brain* getBrain();

	private:
		Brain *_brain;

	protected:

};

#endif