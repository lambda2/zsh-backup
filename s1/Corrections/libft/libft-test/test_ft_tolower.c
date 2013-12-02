/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 17:10:25 by ksever            #+#    #+#             */
/*   Updated: 2013/11/23 17:11:38 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_tolower(void)
{
	int		i;

	i = -1;
	while (i++ < 25)
		assert_true(ft_tolower('A' + i) == 'a' + i);

	assert_true(ft_tolower('A') == 'a');
	assert_true(ft_tolower('Z') == 'z');
	assert_true(ft_tolower('`') == '`');
	assert_true(ft_tolower('{') == '{');
	assert_true(ft_tolower('i') == 'i');
	assert_true(ft_tolower('F') == 'f');
	assert_true(ft_tolower('@') == '@');
	assert_true(ft_tolower('[') == '[');
	assert_true(ft_tolower('0') == '0');
	assert_true(ft_tolower('+') == '+');
	assert_true(ft_tolower('~') == '~');
	assert_true(ft_tolower(-42) == -42);
	assert_true(ft_tolower(512) == 512);
}

