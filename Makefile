NAME		= libftprintf.a
LIBFT 		= libft.a
SRCS		=  fmt_to_decimal.c \
				fmt_to_pointer.c fmt_to_string.c  parser.c \
				fmt_to_udecimal.c ft_printf.c fmt_to_hex.c \
				fmt_to_char.c
LDIR		= ./lib/
SDIR 		= ./srcs/
ODIR		= ./objs/
INCLUDE		= ./include
CC			= cc
CFLAGS		= -Wall -Werror -Wextra
OBJS 		= $(addprefix $(ODIR), $(SRCS:.c=.o))

all:	$(NAME)

$(NAME): $(ODIR) $(OBJS)
	@make -C $(LDIR)
	@mv $(LDIR)libft.a $(NAME)
	@ar rcs $(NAME) $(OBJS)

$(ODIR)%.o: $(SDIR)%.c
	@echo "$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $@" 
	@$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $@

$(ODIR):
	@test -d $(ODIR) || mkdir $(ODIR)

clean:
	@rm -rf $(ODIR)
	@make clean -C $(LDIR)

fclean: clean
	@rm -f $(NAME)
	@make fclean -C $(LDIR)

re: fclean all

.PHONY: all clean fclean re
