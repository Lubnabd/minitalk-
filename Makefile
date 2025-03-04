# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/28 14:46:28 by labdelkh          #+#    #+#              #
#    Updated: 2025/01/28 14:46:32 by labdelkh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = client.c server.c

OBJS = ${SRCS:.c=.o}

CC = cc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

all: client server

client: client.o libft
		${CC} ${CFLAGS} $< -Llibft -lft -o client

server: server.o libft
		${CC} ${CFLAGS} $< -Llibft -lft -o server

.c.o:
	${CC} ${CFLAGS} -c $< -o $@

libft:
		make -C libft

clean:
		${RM} ${OBJS}
		make -C libft clean

fclean: clean
		${RM} server client libft/libft.a

re: fclean all

.PHONY: all clean fclean re libft
