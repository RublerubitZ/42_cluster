# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seku <seku@student.42gyeongsan.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/16 23:41:20 by seku              #+#    #+#              #
#    Updated: 2024/03/23 02:16:46 by seku             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_SERVER	= server
NAME_CLIENT	= client

PRINTF		= ft_printf

CC		= cc
CFLAG		= -Wall -Wextra -Werror

RM		= rm -f

SRCS		= server.c	\
		  client.c	\

BNS_SRCS  =      ft_lstsize.c \
		 ft_lstadd_back.c \
		 ft_lstadd_front.c \
		 ft_lstclear.c \
		 ft_lstdelone.c \
		 ft_lstiter.c \
		 ft_lstlast.c \
		 ft_lstmap.c \
		 ft_lstnew.c

OBJS = $(SRCS:%.c=%.o)

BNS_OBJS = $(BNS_SRCS:%.c=%.o)


ifdef WITH_BONUS
	OBJ_FILES = $(OBJS) $(BNS_OBJS)
else
	OBJ_FILES = $(OBJS)
endif

all : $(NAME)

$(NAME) : $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@

bonus :
	make WITH_BONUS=1 all

clean :
	rm -f $(OBJS) $(BNS_OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY	: all clean fclean re bonus
