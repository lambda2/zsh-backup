/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 19:14:42 by ksever            #+#    #+#             */
/*   Updated: 2013/11/25 19:03:52 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	all_tests(void)
{
	test_fixture_part1();
	test_fixture_part2();
	test_fixture_bonus();
}

int		rand_range(int a, int b)
{
	return rand() % (b - a) + a;
}

char	*ft_fill_rand_str(char *str, size_t length)
{
	while (length--)
		*(str + length) = rand_range(33, 126);
	*(str + length) = '\0';
	return (str);
}

int		main(void)
{
	srand(time(NULL));
	if (run_tests(all_tests))
		return (0);
	else
		return (1);
}

