/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 18:27:42 by ksever            #+#    #+#             */
/*   Updated: 2013/11/23 18:48:56 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_strdel(void)
{
	char	*strdel_1;

	strdel_1 = (char *)malloc(sizeof(strdel_1) * 6);
	if (strdel_1 != NULL)
	{
		strdel_1[0] = 'H';
		strdel_1[1] = 'e';
		strdel_1[2] = 'l';
		strdel_1[3] = 'l';
		strdel_1[4] = 'o';
		strdel_1[5] = '\0';
	}
	ft_strdel(&strdel_1);
	assert_true(strdel_1 == NULL);
}

