CXX			= c++
CXXFLAG		= -Wall -Wextra -Werror -std=c++98
INCLUDE		= -Iinclude

NAME		= PhoneBook
SRCDIR		= src
SRCFILES	= main.cpp
SRC			= $(addprefix $(SRCDIR)/, $(SRCFILES)))
OBJDIR		= obj
OBJ 		= $(addprefix $(OBJDIR)/, $(SRCFILES:%.cpp=%.o))

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAG) $(OBJ) -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(INCLUDE) $(CXXFLAG) -o $@ -c $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
