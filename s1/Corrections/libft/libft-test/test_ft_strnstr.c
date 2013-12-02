/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 15:57:18 by ksever            #+#    #+#             */
/*   Updated: 2013/11/23 16:08:34 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_strnstr(void)
{
	char	*strnstr_1_hay = "He thinks there are things to do here.";
	char	*strnstr_1_result;
	char	*strnstr_2_hay = "He thinks she has a thing for him.";
	char	*strnstr_2_result;
	char	*strnstr_3_hay = "String with nothing.";
	char	*strnstr_3_result;
	char	*strnstr_4_result;
	char	*strnstr_5_result;
	char	*strnstr_6_hay = "AABABABCABCABCDABCD";
	char	*strnstr_6_result;
	char	*strnstr_7_result;

	strnstr_1_result = ft_strnstr(strnstr_1_hay, "things", 39);
	assert_string_equal("things to do here.", strnstr_1_result);
	assert_true(strnstr_1_result == &strnstr_1_hay[20]);
	strnstr_2_result = ft_strnstr(strnstr_2_hay, "things", 35);
	assert_true(strnstr_2_result == NULL);
	strnstr_3_result = ft_strnstr(strnstr_3_hay, "", 20);
	assert_true(strnstr_3_result == strnstr_3_hay);
	strnstr_4_result = ft_strnstr(strnstr_1_hay, "things", 26);
	assert_true(strnstr_4_result == &strnstr_1_hay[20]);
	strnstr_5_result = ft_strnstr(strnstr_1_hay, "things", 25);
	assert_true(strnstr_5_result == NULL);
	strnstr_6_result = ft_strnstr(strnstr_6_hay, "ABCD", 14);
	assert_true(strnstr_6_result == NULL);
	strnstr_7_result = ft_strnstr(strnstr_6_hay, "ABCD", 15);
	assert_true(strnstr_7_result == &strnstr_6_hay[11]);
}

