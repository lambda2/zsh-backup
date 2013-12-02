/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 20:25:24 by ksever            #+#    #+#             */
/*   Updated: 2013/11/23 19:09:32 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_memset(void)
{
	char	memset_1[11] = "abcdefghij";
	char	memset_2[11] = "abcdefghij";
	int		memset_3[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int		memset_3_expected[10] = {336860180, 20, 2, 3, 4, 5, 6, 7, 8, 9};

	ft_memset(memset_1, 'K', 5);
	assert_string_equal("KKKKKfghij", memset_1);
	ft_memset(memset_2, 'K', 0);
	assert_string_equal("abcdefghij", memset_2);
	ft_memset(memset_3, 20, 5);
	assert_n_array_equal(memset_3_expected, memset_3, 10);
}

