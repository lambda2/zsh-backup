# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksever <ksever@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/19 13:43:22 by ksever            #+#    #+#              #
#    Updated: 2013/12/02 18:52:04 by aaubin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test_libft

CC = llvm-gcc

SRC = $(wildcard *.c)
TEST_DIR = $(shell pwd)

TEST_LIB = ~/Documents/dev/tests/seatest/inc/
ROOT = ../ksever/

.PHONY: $(NAME)
all: $(NAME) test

$(NAME): clean get-lib 
	$(CC) -g -Wall -Werror -Wextra -ansi -pedantic -O3 -L. -lft -o $(NAME) $(SRC)

bin-only: get-test
	$(CC) -g -Wall -Werror -Wextra -ansi -pedantic -O3 -L. -lft -o $(NAME) $(SRC)

clean:
	rm -fv libft.h
	rm -fv libft.a

fclean:
	rm -fv $(NAME)

re: fclean all

get-lib:
	cd $(ROOT); make dev; cp libft.a $(TEST_DIR); cp libft.h $(TEST_DIR); make fclean

get-test:
	cp $(TEST_LIB)seatest.c ./
	cp $(TEST_LIB)seatest.h ./

test:
	@echo "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="
	@echo "=You can test with 'make log' to log the trace to test_libft.trace="
	@echo "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="
	./$(NAME)

log: all
	./$(NAME) > test_libft.trace
	less ./test_libft.trace
