
SRCS = megaphone.cpp

FLAGS = -Wall -Werror -Wextra -std=c++98

NAME = megaphone

all : $(NAME)

$(NAME): $(SRCS)
	@clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:
	@rm megaphone

fclean: clean

re: fclean all
