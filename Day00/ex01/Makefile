
SRCS =  main.cpp 

FLAGS = -Wall -Werror -Wextra -std=c++98

NAME = PhoneBook

all : $(NAME)

$(NAME): $(SRCS)
	@clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:
	@rm PhoneBook

fclean: clean

re: fclean all
