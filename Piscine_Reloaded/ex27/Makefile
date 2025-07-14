NAME = ft_display_file

SRC = main.c

all: $(NAME)

$(NAME) : $(SRC)
	gcc -Wall -Wextra -Werror $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

.PHONY: all clean fclean
