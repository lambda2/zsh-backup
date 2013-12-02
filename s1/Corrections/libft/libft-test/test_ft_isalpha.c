/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 13:44:41 by ksever            #+#    #+#             */
/*   Updated: 2013/11/23 16:50:35 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_isalpha(void)
{
	assert_true(ft_isalpha('a'));
	assert_false(ft_isalpha('`'));
	assert_false(ft_isalpha('{'));
	assert_true(ft_isalpha('i'));
	assert_true(ft_isalpha('A'));
	assert_false(ft_isalpha('@'));
	assert_false(ft_isalpha('['));
	assert_false(ft_isalpha('0'));
	assert_false(ft_isalpha('+'));
	assert_false(ft_isalpha('~'));
	assert_false(ft_isalpha(-42));
	assert_false(ft_isalpha(512));
}

