NAME = megaphone
CFLAGS = -Wall -Werror -Wextra -std=c++98
CXX = c++
OBJS = $(SRCS:.cpp=.o)
SRCS = ./megaphone.cpp

all: $(NAME)

%.o: %.cpp
	$(CXX) $(CLFAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
