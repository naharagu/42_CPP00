CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

NAME	= megaphone
SRCS	= megaphone.cpp
OBJS	= ${SRCS:%.cpp=%.o}

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

# $@ the file name of the target of the rule
# $^ the names of all the dependencies, with spaces between them
# $< the name of the first dependency