/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 23:39:27 by ksever            #+#    #+#             */
/*   Updated: 2013/11/23 00:14:39 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_memmove(void)
{
	char	*memmove_1_from =  "abcdefghij";
	char	memmove_1_to[11] = "|+|+|+|+|+";
	char	*memmove_1_result;
	char	*memmove_2_from =  "klmnopqrst";
	char	memmove_2_to[11] = "|+|+|+|+|+";
	char	*memmove_2_result;
	char	memmove_3_from[11] = "abcdefghij";
	char	*memmove_3_to = &memmove_3_from[5];
	char	*memmove_3_result;
	char	memmove_4_from[11] =  "klmnopqrst";
	char	*memmove_4_to  = &memmove_4_from[5];
	char	*memmove_4_result;
	char	memmove_5_from[11] =  "arglglglgl";
	char	*memmove_5_to  = &memmove_5_from[0];
	char	*memmove_5_result;
	int		memmove_6_from[10] = {-42, -21, -84, 42, 21, 10, 3, 78, 4, -978};
	int		memmove_6_to[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int		memmove_6_expected[10] = {-42, -21, -84, 42, 21, 10, 3, 78, 4, -978};
	int		*memmove_6_result;
	int		memmove_7_from[10] = {-10, 9, 41, 16, 73, 17, 55, -89, 0, 24157};
	int		memmove_7_to[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int		memmove_7_expected[10] = {-10, 9, 41, 16, 73, 5, 6, 7, 8, 9};
	int		*memmove_7_result;
	int		memmove_8_from[10] = {-42, -21, -84, 42, 21, 10, 3, 78, 4, -978};
	int		*memmove_8_to = &memmove_8_from[4];
	int		memmove_8_expected[10] = {-42, -21, -84, 42, -42, -21, -84, 42, 21, -978};
	int		*memmove_8_result;

	memmove_1_result = (char *)ft_memmove(memmove_1_to, memmove_1_from, 11);
	assert_string_equal("abcdefghij", memmove_1_to);
	assert_true(memmove_1_result == memmove_1_to);
	memmove_2_result = (char *)ft_memmove(memmove_2_to, memmove_2_from, 5);
	assert_string_equal("klmno+|+|+", memmove_2_to);
	assert_true(memmove_2_result == memmove_2_to);
	memmove_3_result = (char *)ft_memmove(memmove_3_to, memmove_3_from, 5);
	assert_string_equal("abcde", memmove_3_to);
	assert_true(memmove_3_result == memmove_3_to);
	memmove_4_result = (char *)ft_memmove(memmove_4_from, memmove_4_from, 5);
	assert_string_equal("pqrst", memmove_4_to);
	assert_true(memmove_4_result == memmove_4_from);
	memmove_5_result = (char *)ft_memmove(memmove_5_to, memmove_5_from, 11);
	assert_string_equal("arglglglgl", memmove_5_to);
	assert_true(memmove_5_result == memmove_5_from);
	memmove_6_result = (int *)ft_memmove(memmove_6_to, memmove_6_from, 40);
	assert_n_array_equal(memmove_6_expected, memmove_6_to, 10);
	assert_true(memmove_6_result == memmove_6_to);
	memmove_7_result = (int *)ft_memmove(memmove_7_to, memmove_7_from, 20);
	assert_n_array_equal(memmove_7_expected, memmove_7_to, 10);
	assert_true(memmove_7_result == memmove_7_to);
	memmove_8_result = (int *)ft_memmove(memmove_8_to, memmove_8_from, 20);
	assert_n_array_equal(memmove_8_expected, memmove_8_from, 10);
	assert_true(memmove_8_result == memmove_8_to);
}

