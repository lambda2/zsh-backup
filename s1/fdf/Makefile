# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/26 22:57:40 by aaubin            #+#    #+#              #
#    Updated: 2013/11/26 23:33:08 by aaubin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CFLAGS=-Wall -Werror -Wextra -I./libft -L./libft -lft
LDFLAGS=-g
NAME=fdf
SRC=ft_fdf.c

NOM=$(basename $(SRC))
OBJ=$(addsuffix .o, $(NOM))

makelib:
	make -f Makefile -C libft

all: makelib normal

normal: $(NAME)

verbose: clean all_debug

all_debug: CFLAGS += -DVERBOSE
all_debug: normal

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $^ $(CFLAGS)

%.o: %.c
	$(CC) $(LFLAGS) -o $@ -c $<

fclean: clean mrproper

re: fclean all

clean:
	@rm -rf $(OBJ)

mrproper: clean
	@rm -rf $(NAME)
