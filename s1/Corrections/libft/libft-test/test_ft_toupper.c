/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 17:05:37 by ksever            #+#    #+#             */
/*   Updated: 2013/11/23 17:10:06 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_toupper(void)
{
	int		i;

	i = -1;
	while (i++ < 25)
		assert_true(ft_toupper('a' + i) == 'A' + i);

	assert_true(ft_toupper('a') == 'A');
	assert_true(ft_toupper('z') == 'Z');
	assert_true(ft_toupper('`') == '`');
	assert_true(ft_toupper('{') == '{');
	assert_true(ft_toupper('i') == 'I');
	assert_true(ft_toupper('A') == 'A');
	assert_true(ft_toupper('@') == '@');
	assert_true(ft_toupper('[') == '[');
	assert_true(ft_toupper('0') == '0');
	assert_true(ft_toupper('+') == '+');
	assert_true(ft_toupper('~') == '~');
	assert_true(ft_toupper(-42) == -42);
	assert_true(ft_toupper(512) == 512);
}

