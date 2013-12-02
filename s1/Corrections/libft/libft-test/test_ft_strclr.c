/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strclr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 19:33:38 by ksever            #+#    #+#             */
/*   Updated: 2013/11/23 19:47:43 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_strclr(void)
{
	int		i;
	char	strclr_1[13] = "This is test";

	ft_strclr(strclr_1);
	i = -1;
	while (i++ < 12)
		assert_true(strclr_1[i] == '\0');
}

