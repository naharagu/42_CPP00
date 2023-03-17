CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS	= megaphone.cpp
NAME	= megaphone
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
