# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: astaroth </var/spool/mail/astaroth>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/11 17:46:44 by astaroth          #+#    #+#              #
#    Updated: 2022/07/12 13:35:38 by astaroth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
SRCS		:= fmt_from_decimal.c \
					fmt_from_pointer.c fmt_from_string.c  parser.c \
					fmt_from_udecimal.c fmt_from_uhex.c ft_printf.c \
					fmt_from_lhex.c fmt_from_char.c
LDIR		:= ./lib/
SDIR 		:= ./srcs/
ODIR		:= ./objs/
INCLUDE		:= ./include
CC			= cc
CFLAGS		= -Wall -Werror -Wextra
OBJS 		:= $(SRCS:.c=.o)


all:	$(NAME)

$(NAME):	$(OBJS)
	@$(MAKE) -C $(LDIR)
	@mv $(LDIR)/libft.a $@
	@ar rcs $@ $^
	@echo "Library $(NAME) created with success."

%.o:	$(SDIR)%.c
	@cc $(CFLAGS) -I$(HEADER) -I$(LDIR) -c $< -o $@
	@echo "Object $@ created with succes."

clean:
	@$(MAKE) clean -C $(LDIR)
	@rm -f $(OBJS)
	@echo "All objects removed with success."

fclean:	clean
	@rm -f $(NAME)
	@echo "Library $(NAME) removed with success."

re: fclean all

.PHONY: all clean fclean re
