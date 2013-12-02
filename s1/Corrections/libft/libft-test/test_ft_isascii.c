/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 16:56:12 by ksever            #+#    #+#             */
/*   Updated: 2013/11/23 17:00:20 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_isascii(void)
{
	assert_true(ft_isascii('a'));
	assert_true(ft_isascii('z'));
	assert_true(ft_isascii('`'));
	assert_true(ft_isascii('{'));
	assert_true(ft_isascii('i'));
	assert_true(ft_isascii('A'));
	assert_true(ft_isascii('Z'));
	assert_true(ft_isascii('@'));
	assert_true(ft_isascii('['));
	assert_true(ft_isascii('/'));
	assert_true(ft_isascii('0'));
	assert_true(ft_isascii('9'));
	assert_true(ft_isascii(':'));
	assert_true(ft_isascii('+'));
	assert_true(ft_isascii('~'));
	assert_true(ft_isascii(127));
	assert_false(ft_isascii(128));
	assert_true(ft_isascii(0));
	assert_false(ft_isascii(-1));
	assert_false(ft_isascii(-42));
	assert_false(ft_isascii(512));
}

