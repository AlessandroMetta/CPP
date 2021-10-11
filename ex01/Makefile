CC = clang++
CFLAGS = -Wall -Werror -Wextra
FILE = PhoneBook.cpp main.cpp Contact.cpp
NAME = oPhonebook

OBJ = $(FILE:%.cpp=%.o)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(FILE) -o $(NAME)

all: $(NAME)

clean:
		rm $(OBJ)

fclean: clean
		rm -rf $(NAME)

re:	fclean all

.PHONY:		all clean fclean re
