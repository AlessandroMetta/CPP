CC = clang++

CFLAGS = -Wall -Werror -Wall -std=c++98 -pedantic

NAME = ConcreteForm

SRCS = Bureaucrat.cpp Form.cpp main.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

OBJS = $(SRCS:.cpp=.o)

%.o:%.cpp
	$(CC) $(CFLAGS) -c $<

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
