NAME = horde
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
CXX = c++
OBJS = $(SRCS:.cpp=.o)
SRCS =	./main.cpp \
	./Zombie.cpp \
	./ZombieHorde.cpp

all: $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
