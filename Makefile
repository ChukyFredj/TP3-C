##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## make file.
##

SRC	=	./src/menu.c \
		./src/exo1.c \
		./src/exo2.c \
		./src/exo3.c \
		./main.c

OBJ	=	$(notdir $(SRC:.c=.o))

NAME	=	tp-3

all:	$(NAME)

$(NAME):
	gcc -c $(SRC)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f *.o
	rm -f *# *~ ./*/*# ./*/*~ ./*/*/*# ./*/*/*~ vgcore*

fclean:	clean
	rm -f $(NAME)

re:	fclean all

valgrind:	clean
	gcc -g3 -o $(NAME) $(SRC)

debug: clean
	gcc -g3 -o $(NAME) $(SRC) -Wall -Wextra -pedantic

