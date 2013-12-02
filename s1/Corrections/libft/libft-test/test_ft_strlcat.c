/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 14:52:58 by ksever            #+#    #+#             */
/*   Updated: 2013/11/23 15:29:42 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_strlcat(void)
{
	char	strlcat_1[30] = "This needs something ";
	size_t	strlcat_1_result;
	char	strlcat_2[16] = "Nothing ";
	size_t	strlcat_2_result;
	char	strlcat_3[16] = "Nothing ";
	size_t	strlcat_3_result;
	char	strlcat_4[30] = "Testing";
	size_t	strlcat_4_result;

	strlcat_1_result = ft_strlcat(strlcat_1, "more", 26);
	assert_string_equal("This needs something more", strlcat_1);
	assert_int_equal(25, strlcat_1_result);
	strlcat_2_result = ft_strlcat(strlcat_2, "Matters of importance", 16);
	assert_string_equal("Nothing Matters", strlcat_2);
	assert_int_equal(29, strlcat_2_result);
	strlcat_3_result = ft_strlcat(strlcat_3, "Matters of importance", 0);
	assert_string_equal("Nothing ", strlcat_3);
	assert_int_equal(21, strlcat_3_result);
	strlcat_4_result = ft_strlcat(strlcat_4, "with class", 4);
	assert_string_equal("Testing", strlcat_4);
	assert_int_equal(14, strlcat_4_result);
}

