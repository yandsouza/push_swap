# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/23 14:29:32 by ynascime          #+#    #+#              #
#    Updated: 2026/06/23 15:02:35 by ynascime         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
SRCS		=	main.c \
				indexer.c \
				stack/node_add.c \
				stack/stack_init.c \
				stack/push_stack.c \
				ops/push.c \
				ops/rotate.c \

OBJS		= $(SRCS:%.c=%.o)
CC			= cc
CFLAGS		= -Wall -Wextra -Werror -I include -I $(LIBFT_DIR)
HEADER		= include/push_swap.h
LIBFT_DIR	= ./libft
LIBFT		= $(LIBFT_DIR)/libft.a

all:	$(NAME)

$(NAME):	$(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT)

%.o:	%.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	make -C $(LIBFT_DIR)

clean:
	rm -f $(OBJS)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean

re:	fclean all

.PHONY: all clean fclean re
