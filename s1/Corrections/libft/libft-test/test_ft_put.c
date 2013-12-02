/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_put.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 19:49:41 by ksever            #+#    #+#             */
/*   Updated: 2013/11/25 19:24:57 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_put(void)
{
	printf("~ ~ ~ ~ ~ Visual check needed ~ ~ ~ ~ ~\n");

	ft_putchar('P');
	ft_putchar('u');
	ft_putchar('t');
	ft_putchar('c');
	ft_putchar('h');
	ft_putchar('a');
	ft_putchar('r');
	ft_putchar(':');
	ft_putchar(' ');
	ft_putchar('O');
	ft_putchar('K');
	ft_putchar('\n');

	ft_putstr("Putstr: OK\n");

	ft_putendl("Putendl: OK");

	ft_putendl("Expected result: 2147483647");
	ft_putstr( "Putnbr result  : ");
	ft_putnbr(2147483647);
	ft_putchar('\n');

	ft_putendl("Expected result: -2147483648");
	ft_putstr( "Putnbr result  : ");
	ft_putnbr(-2147483648);
	ft_putchar('\n');

	ft_putendl("Expected result: 0");
	ft_putstr( "Putnbr result  : ");
	ft_putnbr(0);
	ft_putchar('\n');

	ft_putstr("--------  E N D -------\n");
}

