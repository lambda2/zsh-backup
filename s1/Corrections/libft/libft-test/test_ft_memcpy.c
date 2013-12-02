/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 22:19:01 by ksever            #+#    #+#             */
/*   Updated: 2013/11/22 22:43:14 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_memcpy(void)
{
	char	*memcpy_1_from =  "abcdefghij";
	char	memcpy_1_to[11] = "|+|+|+|+|+";
	char	*memcpy_2_from =  "klmnopqrst";
	char	memcpy_2_to[11] = "|+|+|+|+|+";
	int		memcpy_3_from[10]     = {-42, -21, -84, 42, 21, 10, 3, 78, 4, -978};
	int		memcpy_3_to[10]       = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int		memcpy_3_expected[10] = {-42, -21, -84, 42, 21, 10, 3, 78, 4, -978};
	int		memcpy_4_from[10]     = {-10, 9, 41, 16, 73, 17, 55, -89, 0, 24157};
	int		memcpy_4_to[10]       = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int		memcpy_4_expected[10] = {-10, 9, 41, 16, 73, 5, 6, 7, 8, 9};
	char	memcpy_5_from[13] = "zisismadness";
	char	*memcpy_5_to = &memcpy_5_from[6];

	ft_memcpy(memcpy_1_to, memcpy_1_from, 11);
	assert_string_equal("abcdefghij", memcpy_1_to);
	ft_memcpy(memcpy_2_to, memcpy_2_from, 5);
	assert_string_equal("klmno+|+|+", memcpy_2_to);
	ft_memcpy(memcpy_3_to, memcpy_3_from, 40);
	assert_n_array_equal(memcpy_3_expected, memcpy_3_to, 10);
	ft_memcpy(memcpy_4_to, memcpy_4_from, 20);
	assert_n_array_equal(memcpy_4_expected, memcpy_4_to, 10);
	ft_memcpy(memcpy_5_to, memcpy_5_from, 6);
	assert_string_equal("zisism", memcpy_5_to);
}

