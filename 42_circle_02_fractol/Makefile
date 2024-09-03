# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seku <seku@student.42gyeongsan.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/16 23:41:20 by seku              #+#    #+#              #
#    Updated: 2024/09/03 17:37:08 by seku             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= fractol

LIBFT		= ./libft/libft.a

CC		= cc
CFLAG		= -Wall -Wextra -Werror

RM		= rm -f

SRCS		= fractol.c \
		  utils.c \
		  make_engine.c \

OBJS = $(SRCS:%.c=%.o)

# MLX SETTING



all: $(NAME)

$(LIBFT):
	$(MAKE) -C ./libft

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o fractol

clean:
	$(MAKE) clean -C ./libft
	$(RM) $(OBJS) $(OBJS)

fclean: clean
	$(MAKE) fclean -C ./libft
	$(RM) $(SERVER) $(CLIENT)

re: fclean all

.PHONY	: all clean fclean re
