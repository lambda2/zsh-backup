/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 13:40:58 by ksever            #+#    #+#             */
/*   Updated: 2013/11/24 20:25:05 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_strchr(void)
{
	char	*strchr_1_hay = "He thinks I made the IT dept work.";
	char	*strchr_1_result;
	char	*strchr_2_hay = "abcdefghijklmnopqrstuvwxy\0z0123456789";
	char	*strchr_2_result;
	char	*strchr_3_hay = "There is no plus here";
	char	*strchr_3_result;
	char	*strchr_4_hay = "This is going nowhere";
	char	*strchr_4_result;
	char	*strchr_5_hay = "This is still going nowhere";
	char	*strchr_5_result;
	char	*strchr_6_hay = "there is no caps t in this text.";
	char	*strchr_6_result;


	strchr_1_result = ft_strchr(strchr_1_hay, 'I');
	assert_true(strchr_1_result == &strchr_1_hay[10]);
	strchr_2_result = ft_strchr(strchr_2_hay, '\0');
	assert_true(strchr_2_result == &strchr_2_hay[25]);
	strchr_3_result = ft_strchr(strchr_3_hay, '+');
	assert_true(strchr_3_result == NULL);
	strchr_4_result = ft_strchr(strchr_4_hay, 512);
	assert_true(strchr_4_result == &strchr_4_hay[21]);
	strchr_5_result = ft_strchr(strchr_5_hay, -42);
	assert_true(strchr_5_result == NULL);
	strchr_6_result = ft_strchr(strchr_6_hay, 340);
	assert_true(strchr_6_result == NULL);
}

