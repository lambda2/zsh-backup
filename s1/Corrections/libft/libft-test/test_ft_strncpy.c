/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 14:03:12 by ksever            #+#    #+#             */
/*   Updated: 2013/11/23 14:11:40 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_strncpy(void)
{
	char	*strncpy_1_from = "Test string";
	char	strncpy_1_to[19] = "Longer string here";
	char	*strncpy_2_from =  "Long string here.";
	char	strncpy_2_to[18] = "Small destination";
	char	*strncpy_3_from =  "String to copy...";
	char	strncpy_3_to[18] = "";
	char	*strncpy_4_from =  "String to copy...";
	char	strncpy_4_to[27] = "This is already stuff here";
	char	strncpy_5_to[27] = "This is already stuff here";
	char	*strncpy_6_from =  "Tiny.";
	char	strncpy_6_to[31] = " P L E N T Y  O F  S P A C E ";
	int		i;

	ft_strncpy(strncpy_1_to, strncpy_1_from, 19);
	assert_string_equal("Test string", strncpy_1_to);
	ft_strncpy(strncpy_2_to, strncpy_2_from, 18);
	assert_string_equal("Long string here.", strncpy_2_to);
	ft_strncpy(strncpy_3_to, strncpy_3_from, 18);
	assert_string_equal("String to copy...", strncpy_3_to);
	ft_strncpy(strncpy_4_to, strncpy_4_from, 18);
	assert_string_equal("String to copy...", strncpy_4_to);
	ft_strncpy(strncpy_5_to, strncpy_4_from, 17);
	assert_string_equal("String to copy...tuff here", strncpy_5_to);
	ft_strncpy(strncpy_6_to, strncpy_6_from, 31);
	assert_string_equal("Tiny.", strncpy_6_to);
	i = 4;
	while (i++ < 30)
		assert_true(strncpy_6_to[i] == '\0');
}

