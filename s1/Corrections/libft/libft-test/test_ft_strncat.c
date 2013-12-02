/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 13:35:55 by ksever            #+#    #+#             */
/*   Updated: 2013/11/23 14:52:33 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_strncat(void)
{
	char	strncat_1[46] = "This needs something ";
	char	strncat_2[16] = "Nothing ";
	char	strncat_3[16] = "Nothing ";


	ft_strncat(strncat_1, "more", 4);
	assert_string_equal("This needs something more", strncat_1);
	ft_strncat(strncat_2, "Matters of importance", 7);
	assert_string_equal("Nothing Matters", strncat_2);
	ft_strncat(strncat_3, "Matters of importance", 0);
	assert_string_equal("Nothing ", strncat_3);
}

