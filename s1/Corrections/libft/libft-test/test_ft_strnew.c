/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnew.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 18:13:47 by ksever            #+#    #+#             */
/*   Updated: 2013/11/23 18:18:06 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_strnew(void)
{
	int		i;
	char	*strnew_1;

	strnew_1 = ft_strnew(10);
	i = -1;
	while (i++ < 10)
		assert_true(strnew_1[i] == '\0');
	free(strnew_1);
}

