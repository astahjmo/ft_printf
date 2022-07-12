# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: astaroth </var/spool/mail/astaroth>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/11 17:46:44 by astaroth          #+#    #+#              #
#    Updated: 2022/07/12 16:31:50 by coder            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
SRCS		:= fmt_from_decimal.c \
					fmt_from_pointer.c fmt_from_string.c  parser.c \
					fmt_from_udecimal.c fmt_from_uhex.c ft_printf.c \
					fmt_from_lhex.c
LIB 		:= ft_atoi.c ft_calloc.c ft_bzero.c ft_isalnum.c \
					ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
					ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
					ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c \
					ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
					ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c \
					ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
					ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
					ft_putendl_fd.c ft_putnbr_fd.c

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
