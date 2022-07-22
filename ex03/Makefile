SRC = AMateria.cpp Character.cpp Cure.cpp Ice.cpp main.cpp MateriaSource.cpp
NAME = materia
CPPFLAGS = -Werror -Wextra -Wall -std=c++98
OBJ=$(SRC:%.cpp=%.o)

all : $(NAME)

$(NAME) : $(OBJ)
	g++ $(CPPFLAGS) $(OBJ) -o $(NAME)

.o:.cpp
	g++ -c $(CPPFLAGS) $? 

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

save :
	git commit -am "$(MAKECMDGOALS)"
	git push https://github.com/swautelet/cpp04.git

.phony : fclean clean re all