# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seku <seku@student.42gyeongsan.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/16 23:41:20 by seku              #+#    #+#              #
#    Updated: 2024/07/26 15:20:41 by seku             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

CC		= cc
CFLAG		= -Wall -Wextra -Werror

RM		= rm -f

HEADER		= libft.h

SRCS		= ft_strlen.c		\
		ft_strlcpy.c		\
		ft_strlcat.c		\
		ft_strchr.c		\
		ft_strnstr.c		\
		ft_strncmp.c		\
		ft_strdup.c		\
		ft_strrchr.c		\
		ft_memset.c		\
		ft_memcpy.c		\
		ft_memmove.c		\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_bzero.c		\
		ft_atoi.c		\
		ft_calloc.c		\
		ft_isalnum.c		\
		ft_isalpha.c		\
		ft_isascii.c		\
		ft_isdigit.c		\
		ft_isprint.c		\
		ft_tolower.c		\
		ft_toupper.c		\
		ft_substr.c		\
		ft_strjoin.c		\
		ft_strtrim.c		\
		ft_split.c		\
		ft_strmapi.c		\
		ft_striteri.c		\
		ft_itoa.c		\
		ft_putchar_fd.c		\
		ft_putstr_fd.c		\
		ft_putendl_fd.c		\
		ft_putnbr_fd.c		\
		ft_lstsize.c		\
		ft_lstadd_back.c	\
		ft_lstadd_front.c	\
		ft_lstclear.c		\
		ft_lstdelone.c		\
		ft_lstiter.c		\
		ft_lstlast.c		\
		ft_lstmap.c		\
		ft_lstnew.c		\
		ft_printf.c		\
		ft_print_tool.c		\
		ft_print_s.c		\
		ft_print_c.c		\
		ft_print_p.c		\
		ft_print_di.c		\
		ft_print_u.c		\
		ft_print_xx.c		\

# WORK PART

OBJS = $(SRCS:%.c=%.o)

all : $(NAME)

$(NAME) : $(OBJS) ${HEADER}
	ar rcs $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
