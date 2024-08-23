# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seku <seku@student.42gyeongsan.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/16 23:41:20 by seku              #+#    #+#              #
#    Updated: 2024/07/30 21:28:34 by seku             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER		= server
CLIENT		= client

LIBFT		= ./libft/libft.a

CC		= cc
CFLAG		= -Wall -Wextra -Werror

RM		= rm -f

SRCS_SERVER	= server.c
SRCS_CLIENT	= client.c

OBJS_SERVER = $(SRCS_SERVER:%.c=%.o)
OBJS_CLIENT = $(SRCS_CLIENT:%.c=%.o)

all: $(SERVER) $(CLIENT)

$(LIBFT):
	$(MAKE) -C ./libft

$(SERVER): $(OBJS_SERVER) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS_SERVER) $(LIBFT) -o server

$(CLIENT): $(OBJS_CLIENT) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS_CLIENT) $(LIBFT) -o client

clean:
	$(MAKE) clean -C ./libft
	$(RM) $(OBJS_SERVER) $(OBJS_CLIENT)

fclean: clean
	$(MAKE) fclean -C ./libft
	$(RM) $(SERVER) $(CLIENT)

re: fclean all

.PHONY	: all clean fclean re
