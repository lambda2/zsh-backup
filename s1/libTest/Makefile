# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 02:16:59 by aaubin            #+#    #+#              #
#    Updated: 2013/11/20 02:19:02 by aaubin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile de la lib de tests unitaires

CC=gcc
CFLAGS=-Wall -Werror -Wextra
LDFLAGS=
NAME=libft_test.a
SRC=ft_test_asserts.c ft_test_common.c ft_test_dump.c ft_test_results.c 
NOM=$(basename $(SRC))
OBJ=$(addsuffix .o, $(NOM))

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $^
	@ranlib $(NAME)

%.o: %.c
	@$(CC) -o $@ -c $< $(CFLAGS)

fclean: clean mrproper

re: fclean all

clean:
	@rm -rf $(OBJ)

mrproper: clean
	@rm -rf $(NAME)	
