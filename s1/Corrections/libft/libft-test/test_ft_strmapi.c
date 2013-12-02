/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 21:45:58 by ksever            #+#    #+#             */
/*   Updated: 2013/11/23 21:52:35 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static char	test_f_toupper(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 'A' + i);
	return (c);
}

static char	test_f_tolower(unsigned int i, char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 'a' - i);
	return (c);
}

void		test_ft_strmapi(void)
{
	char	*strmapi_1_src = "This Must Be Copied";
	char	*strmapi_1_result;
	char	*strmapi_2_src = "tHIS mUST bE cOPIED";
	char	*strmapi_2_result;

	strmapi_1_result = ft_strmapi(strmapi_1_src, &test_f_toupper);
	assert_true(strmapi_1_result != strmapi_1_src);
	assert_string_equal("TIKV M[Z\\ BP C]_YVV", strmapi_1_result);
	strmapi_2_result = ft_strmapi(strmapi_2_src, &test_f_tolower);
	assert_true(strmapi_2_result != strmapi_2_src);
	assert_string_equal("tggp moll bZ caaYTR", strmapi_2_result);
}


