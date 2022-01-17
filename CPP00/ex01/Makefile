CC = clang++
CFLAGS = -Wall -Werror -Wextra -std=c++98
FILE = PhoneBook.cpp main.cpp Contact.cpp
NAME = thePerfectPhonebook
RM = rm -f
OBJ = $(FILE:%.cpp=%.o)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(FILE) -o $(NAME)

all: $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re:	fclean all

.PHONY:		all clean fclean re
