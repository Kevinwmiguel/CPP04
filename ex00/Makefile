NAME	 =	Polymorphism

SRCS     =	ClapTrap.cpp DiamondTrap.cpp FragTrap.cpp ScavTrap.cpp main.cpp

OBJS     =   $(SRCS:.cpp=.o)

CXX		=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

all : $(NAME)


$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@printf "Compiling \nDone\n"
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re