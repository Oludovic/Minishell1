##
## Makefile for Makefle in /home/ovsepi_l/minishell/minishell
## 
## Made by Ludovic Ovsepian
## Login   <ovsepi_l@epitech.net>
## 
## Started on  Tue Jul 29 14:39:55 2014 Ludovic Ovsepian
## Last update Tue Jul 29 14:39:58 2014 Ludovic Ovsepian
##

SRC	= main.c \
	  srcs/my_strdup.c \
	  srcs/my_putstr.c \
	  srcs/my_strcmp.c \
	  srcs/my_strncmp.c \
	  srcs/my_str_to_wordtab.c \
	  srcs/xmalloc.c \
	  srcs/my_strcocat.c \
	  srcs/fork.c \
	  srcs/built.c

OBJS	= $(SRC:.c=.o)

NAME	= mysh

RM	= rm -f


all:	$(NAME)

$(NAME): $(OBJS)
	gcc -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
