/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 21:07:00 by ksever            #+#    #+#             */
/*   Updated: 2013/11/22 21:23:16 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_bzero(void)
{
	int		i;
	char	bzero_1[27] = "abcdefghijklmnopqrstuvwxyz";
	int		bzero_2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int		bzero_2_expected[10] = {0, 0, 0, 0, 0, 5, 6, 7, 8, 9};

	i = -1;
	ft_bzero(bzero_1, 27);
	while (i++ < 26)
		assert_true(bzero_1[i] == '\0');
	ft_bzero(bzero_2, 20);
	assert_n_array_equal(bzero_2_expected, bzero_2, 10);
}

