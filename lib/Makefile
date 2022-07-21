# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/25 18:25:50 by johmatos          #+#    #+#              #
#    Updated: 2022/07/11 20:09:40 by astaroth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= libft.a
HEADER 		= libft.h
CC 			= cc
CFLAGS 		= -Wall -Werror -Wextra
SRC 		:= ft_strchr.c ft_isascii.c ft_isascii.c \
				ft_strlen.c ft_toupper.c ft_itoa.c \
				ft_putchar_fd.c ft_putstr_fd.c ft_ithex.c ft_ubase.c

OBJS 		:= $(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	ar -rsc $(NAME) $(OBJS)
%.o:	%.c $(HEADER)
	$(CC) $(CFLAGS) -c $<

clean: $(OBJS)
	rm -rf $(OBJS)

fclean: 
	rm -rf $(NAME) $(OBJS)

re: fclean all


.PHONY: all clean fclean
