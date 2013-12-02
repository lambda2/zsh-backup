/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strmap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 21:24:03 by ksever            #+#    #+#             */
/*   Updated: 2013/11/23 21:37:43 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static char	test_f_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 'A');
	return (c);
}

static char	test_f_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 'a');
	return (c);
}

void		test_ft_strmap(void)
{
	char	*strmap_1_src = "This Must Be Copied";
	char	*strmap_1_result;
	char	*strmap_2_src = "This Must Be Copied";
	char	*strmap_2_result;

	strmap_1_result = ft_strmap(strmap_1_src, &test_f_toupper);
	assert_true(strmap_1_result != strmap_1_src);
	assert_string_equal("THIS MUST BE COPIED", strmap_1_result);
	strmap_2_result = ft_strmap(strmap_2_src, &test_f_tolower);
	assert_true(strmap_2_result != strmap_2_src);
	assert_string_equal("this must be copied", strmap_2_result);
}


