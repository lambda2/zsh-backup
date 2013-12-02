/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 16:54:11 by ksever            #+#    #+#             */
/*   Updated: 2013/11/23 16:55:45 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_isalnum(void)
{
	assert_true(ft_isalnum('a'));
	assert_true(ft_isalnum('z'));
	assert_false(ft_isalnum('`'));
	assert_false(ft_isalnum('{'));
	assert_true(ft_isalnum('i'));
	assert_true(ft_isalnum('A'));
	assert_true(ft_isalnum('Z'));
	assert_false(ft_isalnum('@'));
	assert_false(ft_isalnum('['));
	assert_false(ft_isalnum('/'));
	assert_true(ft_isalnum('0'));
	assert_true(ft_isalnum('9'));
	assert_false(ft_isalnum(':'));
	assert_false(ft_isalnum('+'));
	assert_false(ft_isalnum('~'));
	assert_false(ft_isalnum(-42));
	assert_false(ft_isalnum(512));
}

