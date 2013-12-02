/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 15:41:06 by ksever            #+#    #+#             */
/*   Updated: 2013/11/27 15:19:09 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_strrchr(void)
{
	char	*strrchr_1_hay = "He thinks I made the IT dept work.";
	char	*strrchr_1_result;
	char	*strrchr_2_hay = "abcdefghi\0jklmnopqrstuvwxy\0z0123456789";
	char	*strrchr_2_result;
	char	*strrchr_3_hay = "There is no plus here";
	char	*strrchr_3_result;
	char	*strrchr_4_hay = "This is going nowhere";
	char	*strrchr_4_result;
	char	*strrchr_5_hay = "This is still going nowhere";
	char	*strrchr_5_result;

	strrchr_1_result = ft_strrchr(strrchr_1_hay, 'I');
	assert_true(strrchr_1_result == &strrchr_1_hay[21]);
	strrchr_2_result = ft_strrchr(strrchr_2_hay, '\0');
	assert_true(strrchr_2_result == &strrchr_2_hay[9]);
	strrchr_3_result = ft_strrchr(strrchr_3_hay, '+');
	assert_true(strrchr_3_result == NULL);
	strrchr_4_result = strrchr(strrchr_4_hay, 512);
	assert_true(strrchr_4_result == &strrchr_4_hay[21]);
	strrchr_5_result = strrchr(strrchr_5_hay, -42);
	assert_true(strrchr_5_result == NULL);
}

