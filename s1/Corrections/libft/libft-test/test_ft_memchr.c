/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 00:16:41 by ksever            #+#    #+#             */
/*   Updated: 2013/11/23 00:48:31 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_memchr(void)
{
	char	*memchr_1_hay = "Search in this text.";
	char	*memchr_1_result;
	char	*memchr_2_hay = "This should never be found.";
	char	*memchr_2_result;
	char	*memchr_3_result;
	char	*memchr_4_result;
	int		memchr_5_hay[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int		*memchr_5_result;
	int		memchr_6_hay[10] = {-42, 17, 2, 9, 1475, -89, 333, 486, 978, -3};
	int		*memchr_6_result;
	int		*memchr_6_result_sys;
	int		*memchr_7_result;

	memchr_1_result = (char *)ft_memchr(memchr_1_hay, 't', 19);
	assert_string_equal("this text.", memchr_1_result);
	memchr_2_result = (char *)ft_memchr(memchr_2_hay, 'v', 14);
	assert_true(memchr_2_result == NULL);
	memchr_3_result = (char *)ft_memchr(memchr_2_hay, 'v', 15);
	assert_string_equal("ver be found.", memchr_3_result);
	memchr_4_result = (char *)ft_memchr(memchr_2_hay, '7', 19);
	assert_true(memchr_4_result == NULL);
	memchr_5_result = (int *)ft_memchr(memchr_5_hay, 6, 40);
	assert_true(memchr_5_result == &memchr_5_hay[6]);
	memchr_6_result = (int *)ft_memchr(memchr_6_hay, 978, 40);
	memchr_6_result_sys = (int *)memchr(memchr_6_hay, 978, 40);
	assert_true(memchr_6_result == memchr_6_result_sys);
	memchr_7_result = (int *)ft_memchr(memchr_6_hay, -89, 20);
	assert_true(memchr_7_result == NULL);
}

