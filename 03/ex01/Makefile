NAME = claptrap
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
CXX = c++
OBJS = $(SRCS:.cpp=.o)
SRCS = ./main.cpp \
       ./ClapTrap.cpp \
       ./ScavTrap.cpp

all: $(NAME)

%.o:%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re

