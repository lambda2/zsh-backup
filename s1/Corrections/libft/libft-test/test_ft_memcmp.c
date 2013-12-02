/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 12:59:28 by ksever            #+#    #+#             */
/*   Updated: 2013/11/23 13:19:24 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_memcmp(void)
{
	int		memcmp_1_tab1[10]     = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int		memcmp_1_tab2[10]     = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int		memcmp_2_tab2[10]     = {0, 1, 2, 3, 4, 5, -20, 71, 11, -42};

	assert_true(ft_memcmp("This is the same", "This is the same", 17) == 0);
	assert_true(ft_memcmp("This is the same", "This is different", 8) == 0);
	assert_true(ft_memcmp("This is the same", "This is different", 9) > 0);
	assert_true(ft_memcmp("", "", 10) == 0);
	assert_true(ft_memcmp("This is short", "This is shorter", 13) == 0);
	assert_true(ft_memcmp("This is short", "This is shorter", 14) < 0);
	assert_true(ft_memcmp("This is shorter", "This is short", 13) == 0);
	assert_true(ft_memcmp("This is shorter", "This is short", 14) > 0);
	assert_true(ft_memcmp("THIS IS BEFORE", "this is before", 14) < 0);
	assert_true(ft_memcmp("THIS IS BEFORE", "this is before", 1) < 0);
	assert_true(ft_memcmp(memcmp_1_tab1, memcmp_1_tab2, 40) == 0);
	assert_true(ft_memcmp(memcmp_1_tab1, memcmp_2_tab2, 20) == 0);
	assert_true(ft_memcmp(memcmp_1_tab1, memcmp_2_tab2, 24) == 0);
	assert_true(ft_memcmp(memcmp_1_tab1, memcmp_2_tab2, 28) < 0);
}

