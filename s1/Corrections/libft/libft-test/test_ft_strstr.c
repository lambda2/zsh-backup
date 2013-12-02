/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 13:41:38 by ksever            #+#    #+#             */
/*   Updated: 2013/11/23 15:56:58 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_strstr(void)
{
	char	*strstr_1_hay = "He thinks there are things to do here.";
	char	*strstr_1_result;
	char	*strstr_2_hay = "He thinks she has a thing for him.";
	char	*strstr_2_result;
	char	*strstr_3_hay = "String with nothing.";
	char	*strstr_3_result;

	strstr_1_result = ft_strstr(strstr_1_hay, "things");
	assert_string_equal("things to do here.", strstr_1_result);
	assert_true(strstr_1_result == &strstr_1_hay[20]);
	strstr_2_result = ft_strstr(strstr_2_hay, "things");
	assert_true(strstr_2_result == NULL);
	strstr_3_result = ft_strstr(strstr_3_hay, "");
	assert_true(strstr_3_result == strstr_3_hay);
}

