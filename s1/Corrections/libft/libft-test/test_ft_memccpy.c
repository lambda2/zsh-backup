/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memccpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 22:43:45 by ksever            #+#    #+#             */
/*   Updated: 2013/11/22 23:38:25 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_memccpy(void)
{
	char	*memccpy_1_from =  "abcdefghij";
	char	memccpy_1_to[11] = "|+|+|+|+|+";
	char	*memccpy_1_result;
	char	*memccpy_2_from =  "klmnopqrst";
	char	memccpy_2_to[11] = "|+|+|+|+|+";
	char	*memccpy_2_result;
	char	*memccpy_3_from =  "klmnopqrst";
	char	memccpy_3_to[11] = "|+|+|+|+|+";
	char	*memccpy_3_result;
	int		memccpy_4_from[10]     = {-42, -21, -84, 42, 21, 10, 3, 78, 4, -978};
	int		memccpy_4_to[10]       = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int		memccpy_4_expected[10] = {-42, -21, -84, 42, 21, 10, 3, 78, 4, -978};
	int		*memccpy_4_result;
	int		memccpy_5_from[10]     = {-10, 9, 41, 16, 73, 17, 55, -89, 0, 24157};
	int		memccpy_5_to[10]       = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int		memccpy_5_expected[10] = {-10, 9, 41, 16, 73, 5, 6, 7, 8, 9};
	int		*memccpy_5_result;
	int		memccpy_6_from[10]     = {-178, 4, 3, 27, 12, 8745, 45, 22, -44, 157};
	int		memccpy_6_to[10]       = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int		memccpy_6_expected[10] = {-178, 4, 3, 27, 12, 5, 6, 7, 8, 9};
	int		*memccpy_6_result;
	char	memccpy_7_from[11] = "abcdefghij";
	char	*memccpy_7_to   = &memccpy_7_from[6];
	char	*memccpy_7_result;

	memccpy_1_result = ft_memccpy(memccpy_1_to, memccpy_1_from, 'z', 11);
	assert_string_equal("abcdefghij", memccpy_1_to);
	assert_true(memccpy_1_result == NULL);
	memccpy_2_result = ft_memccpy(memccpy_2_to, memccpy_2_from, 'z', 5);
	assert_string_equal("klmno+|+|+", memccpy_2_to);
	assert_true(memccpy_2_result == NULL);
	memccpy_3_result = ft_memccpy(memccpy_3_to, memccpy_3_from, 'p', 11);
	assert_string_equal("klmnop|+|+", memccpy_3_to);
	assert_true(memccpy_3_result == &memccpy_3_to[6]);
	memccpy_4_result = ft_memccpy(memccpy_4_to, memccpy_4_from, -2, 40);
	assert_n_array_equal(memccpy_4_expected, memccpy_4_to, 10);
	assert_true(memccpy_4_result == NULL);
	memccpy_5_result = ft_memccpy(memccpy_5_to, memccpy_5_from, 73, 40);
	assert_n_array_equal(memccpy_5_expected, memccpy_5_to, 10);
	assert_true(memccpy_5_result != NULL);
	memccpy_6_result = ft_memccpy(memccpy_6_to, memccpy_6_from, -2, 20);
	assert_n_array_equal(memccpy_6_expected, memccpy_6_to, 10);
	assert_true(memccpy_6_result == NULL);
	memccpy_7_result = ft_memccpy(memccpy_7_from, memccpy_7_to, '6', 3);
	assert_string_equal("ghij", memccpy_7_to);
	assert_true(memccpy_7_result == NULL);
}

