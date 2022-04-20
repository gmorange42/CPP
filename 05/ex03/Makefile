NAME = bureaucrat
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
OBJS = $(SRCS:.cpp=.o)
SRCS =	./main.cpp \
      	./Bureaucrat.cpp \
      	./Form.cpp \
	./PresidentialPardonForm.cpp \
	./RobotomyRequestForm.cpp \
	./ShrubberyCreationForm.cpp \
	./Intern.cpp

all: $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
