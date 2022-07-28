NAME	= libftprintf.a
VPATH 	= lib srcs
SRCS	= ft_strchr.c ft_isascii.c \
		  ft_strlen.c ft_toupper.c ft_itoa.c \
		  ft_putchar_fd.c ft_putstr_fd.c \
		  ft_ithex.c ft_ubase.c fmt_to_decimal.c \
		  fmt_to_pointer.c fmt_to_string.c  parser.c \
		  fmt_to_udecimal.c ft_printf.c fmt_to_hex.c \
		  fmt_to_char.c

ODIR	= ./objs/
INCLUDE	= ./include
CC		= cc
CFLAGS	= -Wall -Werror -Wextra
OBJS 	= $(addprefix $(ODIR), $(SRCS:.c=.o))

all:	$(NAME)

$(NAME): $(ODIR) $(OBJS)
	@ar rcs $(NAME) $(OBJS)

$(ODIR)%.o: %.c
	@echo "$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $(ODIR)" 
	@$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $@

$(ODIR):
	@test -d $(ODIR) || mkdir $(ODIR)

clean:
	@rm -rf $(ODIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
