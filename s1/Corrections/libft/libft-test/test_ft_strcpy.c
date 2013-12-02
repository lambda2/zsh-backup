/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 13:27:55 by ksever            #+#    #+#             */
/*   Updated: 2013/11/23 14:02:24 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_strcpy(void)
{
	char	*strcpy_1_from = "Test string";
	char	strcpy_1_to[19] = "Longer string here";
	char	*strcpy_2_from =  "Long string here.";
	char	strcpy_2_to[18] = "Small destination";
	char	*strcpy_3_from =  "String to copy...";
	char	strcpy_3_to[18] = "";


	ft_strcpy(strcpy_1_to, strcpy_1_from);
	assert_string_equal("Test string", strcpy_1_to);
	ft_strcpy(strcpy_2_to, strcpy_2_from);
	assert_string_equal("Long string here.", strcpy_2_to);
	ft_strcpy(strcpy_3_to, strcpy_3_from);
	assert_string_equal("String to copy...", strcpy_3_to);
}

