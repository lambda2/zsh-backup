/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memdel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 17:32:36 by ksever            #+#    #+#             */
/*   Updated: 2013/11/23 17:36:01 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_memdel(void)
{
	void	*memdel_1;

	memdel_1 = malloc(10);
	assert_true(memdel_1 != NULL);
	ft_memdel(&memdel_1);
	assert_true(memdel_1 == NULL);
}

