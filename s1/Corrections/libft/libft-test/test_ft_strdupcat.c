/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdupcat.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/28 15:40:14 by ksever            #+#    #+#             */
/*   Updated: 2013/11/28 15:46:13 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_strdupcat(void)
{
	char	*strdupcat_1_s1;
	char	*strdupcat_1_s2;
	char	*strdupcat_1_res;
	char	*strdupcat_2_s1;
	char	*strdupcat_2_s2;
	char	*strdupcat_2_res;
	char	*strdupcat_3_s1;
	char	*strdupcat_3_s2;
	char	*strdupcat_3_res;

	strdupcat_1_s1 = "Ceci est ";
	strdupcat_1_s2 = "un exemple";
	strdupcat_1_res = ft_strdupcat(strdupcat_1_s1, strdupcat_1_s2);
	assert_string_equal("Ceci est un exemple", strdupcat_1_res);
	assert_true(strdupcat_1_res != strdupcat_1_s1);
	assert_true(strdupcat_1_res != strdupcat_1_s2);
	free(strdupcat_1_res);

	strdupcat_2_s1 = "";
	strdupcat_2_s2 = "Ceci est un exemple";
	strdupcat_2_res = ft_strdupcat(strdupcat_2_s1, strdupcat_2_s2);
	assert_string_equal("Ceci est un exemple", strdupcat_2_res);
	assert_true(strdupcat_2_res != strdupcat_2_s1);
	assert_true(strdupcat_2_res != strdupcat_2_s2);
	free(strdupcat_2_res);

	strdupcat_3_s1 = "Ceci est un exemple";
	strdupcat_3_s2 = "";
	strdupcat_3_res = ft_strdupcat(strdupcat_3_s1, strdupcat_3_s2);
	assert_string_equal("Ceci est un exemple", strdupcat_3_res);
	assert_true(strdupcat_3_res != strdupcat_3_s1);
	assert_true(strdupcat_3_res != strdupcat_3_s2);
	free(strdupcat_3_res);

	assert_true(ft_strdupcat(strdupcat_3_s1, NULL) == NULL);
	assert_true(ft_strdupcat(NULL, strdupcat_1_s1) == NULL);
}


