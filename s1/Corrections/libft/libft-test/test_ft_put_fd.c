/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_put_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 20:02:14 by ksever            #+#    #+#             */
/*   Updated: 2013/11/25 19:26:53 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_put_fd(void)
{
	ft_putstr_fd("~ ~ ~ ~ ~ Visual check needed ~ ~ ~ ~ ~\n", 2);

	ft_putchar_fd('P', 2);
	ft_putchar_fd('u', 2);
	ft_putchar_fd('t', 2);
	ft_putchar_fd('c', 2);
	ft_putchar_fd('h', 2);
	ft_putchar_fd('a', 2);
	ft_putchar_fd('r', 2);
	ft_putchar_fd(' ', 2);
	ft_putchar_fd('f', 2);
	ft_putchar_fd('d', 2);
	ft_putchar_fd(':', 2);
	ft_putchar_fd(' ', 2);
	ft_putchar_fd('O', 2);
	ft_putchar_fd('K', 2);
	ft_putchar_fd('\n', 2);

	ft_putstr_fd("Putstr fd: OK\n", 2);

	ft_putendl_fd("Putendl fd: OK", 2);

	ft_putendl_fd("Expected result   : 2147483647", 2);
	ft_putstr_fd( "Putnbr fd result  : ", 2);
	ft_putnbr_fd(2147483647, 2);
	ft_putchar_fd('\n', 2);

	ft_putendl_fd("Expected result   : -2147483648", 2);
	ft_putstr_fd( "Putnbr fd result  : ", 2);
	ft_putnbr_fd(-2147483648, 2);
	ft_putchar_fd('\n', 2);

	ft_putendl_fd("Expected result   : 0", 2);
	ft_putstr_fd( "Putnbr fd result  : ", 2);
	ft_putnbr_fd(0, 2);
	ft_putchar_fd('\n', 2);

	ft_putstr_fd("--------  E N D -------\n", 2);
}

