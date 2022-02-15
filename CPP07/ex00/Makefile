CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

NAME = whatever

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

RM = rm

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $<

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS) 
	
all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
