/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 17:00:42 by ksever            #+#    #+#             */
/*   Updated: 2013/11/23 17:03:30 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_isprint(void)
{
	assert_true(ft_isprint('a'));
	assert_true(ft_isprint('z'));
	assert_true(ft_isprint('`'));
	assert_true(ft_isprint('{'));
	assert_true(ft_isprint('i'));
	assert_true(ft_isprint('A'));
	assert_true(ft_isprint('Z'));
	assert_true(ft_isprint('@'));
	assert_true(ft_isprint('['));
	assert_true(ft_isprint('/'));
	assert_true(ft_isprint('0'));
	assert_true(ft_isprint('9'));
	assert_true(ft_isprint(':'));
	assert_true(ft_isprint('+'));
	assert_true(ft_isprint('~'));
	assert_true(ft_isprint(' '));
	assert_false(ft_isprint(31));
	assert_false(ft_isprint(128));
	assert_false(ft_isprint(-42));
	assert_false(ft_isprint(512));
}

