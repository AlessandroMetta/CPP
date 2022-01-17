CC = clang++
CFLAGS = -Wall -Werror -Wextra
FILE = Account.cpp test.cpp
NAME = output
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
