# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aouloube <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/18 17:51:15 by aouloube          #+#    #+#              #
#    Updated: 2016/10/18 17:51:52 by aouloube         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = wolf3d

FLAGS = -lmlx -O3 -framework OpenGL -framework AppKit

SRC = ./libft/libft.a error.c draw.c main.c raycast.c key_events.c \
	  move.c

LIB =-L libft

all: $(NAME)

$(NAME):
	make -C libft/
	gcc -o $(NAME) $(SRC) $(FLAGS)

clean:
	make -C libft clean

fclean: clean
	make -C libft fclean
	rm -fv $(NAME)

re: fclean all
