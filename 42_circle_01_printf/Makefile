# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seku <seku@student.42gyeongsan.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/03 15:57:28 by seku              #+#    #+#              #
#    Updated: 2024/04/11 20:02:31 by seku             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	      = libftprintf.a

CC		= cc
CFLAG	      = -Wall -Wextra -Werror

RM		= rm -f

SRCS	=       ft_printf.c		\
		  ft_print_tool.c	\
		  ft_print_s.c		\
		  ft_print_c.c		\
		  ft_print_p.c		\
		  ft_print_di.c		\
		  ft_print_u.c		\
		  ft_print_xx.c		\

OBJS = $(SRCS:%.c=%.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(FLAG) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY	: all clean fclean re
