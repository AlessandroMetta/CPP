CC = clang++
CFLAGS = -Wall -Werror -Wextra
FILE = Account.cpp test.cpp
NAME = output

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
