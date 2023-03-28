CXX			= 	c++
CXXFLAG		=	-Wall -Wextra -Werror -std=c++98
INCLUDE		=	-I include

NAME		= 	PhoneBook
SRCDIR		= 	src
SRCFILES	= 	main.cpp		\
				PhoneBook.cpp	\
				Contact.cpp
SRC			=	$(addprefix $(SRCDIR)/, $(SRCFILES)))
OBJDIR		=	obj
OBJ 		=	$(addprefix $(OBJDIR)/, $(SRCFILES:%.cpp=%.o))

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAG) $(OBJ) -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAG) $(INCLUDE) -o $@ -c $^

clean:
	rm -rf $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re

# $@ the file name of the target of the rule
# $^ the names of all the dependencies, with spaces between them
# $< the name of the first dependency