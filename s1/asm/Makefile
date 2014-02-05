# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/26 22:57:40 by aaubin            #+#    #+#              #
#    Updated: 2014/01/17 00:53:33 by aaubin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=clang
LKFLAGS=-Wall -Wextra -pedantic -I./libft/includes -Werror -L./libft -lft
CFLAGS=-Wall -Wextra -pedantic -I./libft/includes
LDFLAGS=-g
ROOT=..
NAME=asm
SRC=asm.c\
	op.c\
	reader.c\
	str_splitter.c\
	instruction.c\
	get_next_line.c

NOM=$(basename $(SRC))

OBJ=$(addsuffix .o, $(NOM))

all: makelib normal

normal: $(NAME)

makelib:
	cd $(ROOT) && git submodule update --init -q
	@make -f Makefile -C libft

cleanlib:
	cd $(ROOT) && git submodule update --init -q
	@make -f Makefile -C libft clean

fcleanlib:
	cd $(ROOT) && git submodule update --init -q
	@make -f Makefile -C libft fclean

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(INC_PATH) $^ $(LKFLAGS)

%.o: %.c
	$(CC) $(LFLAGS) -g -o $@ -c $< $(CFLAGS)

clean: cleanlib
	@rm -rf $(OBJ)

fclean: clean fcleanlib mrproper

re: fclean fcleanlib all

.PHONY: clean mrproper

mrproper: clean
	@rm -rf $(NAME)
