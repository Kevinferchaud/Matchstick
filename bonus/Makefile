##
## Makefile for emacs in /home/kevin.ferchaud/CPE_2016_matchstick
## 
## Made by ferchaud kevin
## Login   <kevin.ferchaud@epitech.net>
## 
## Started on  Mon Feb 13 14:05:06 2017 ferchaud kevin
## Last update Thu Feb 16 20:23:10 2017 ferchaud kevin
##

NAME	=	thegame

SRC	=	matchstick.c		\
		matchstick2.c		\
		modifmap.c		\
		my_getline.c		\
		ia.c			\
		ia2.c			\
		game.c			\
		player.c		\
		checkerror.c		\
		my_strdup.c

OBJ	=	$(SRC:.c=.o)

CC	=	gcc

RM	=	rm -f

CFLAGS	=	-I include -O3

LIB	=	-L lib/my/ -lmy

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(LIB) -lcsfml-window -lcsfml-graphics -lc_graph_prog -lm

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
