/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 16:51:06 by ksever            #+#    #+#             */
/*   Updated: 2013/11/23 16:53:17 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_isdigit(void)
{
	assert_false(ft_isdigit('a'));
	assert_false(ft_isdigit('`'));
	assert_false(ft_isdigit('{'));
	assert_false(ft_isdigit('i'));
	assert_false(ft_isdigit('A'));
	assert_false(ft_isdigit('@'));
	assert_false(ft_isdigit('['));
	assert_false(ft_isdigit('/'));
	assert_true(ft_isdigit('0'));
	assert_true(ft_isdigit('9'));
	assert_false(ft_isdigit(':'));
	assert_false(ft_isdigit('+'));
	assert_false(ft_isdigit('~'));
	assert_false(ft_isdigit(-42));
	assert_false(ft_isdigit(512));
}

