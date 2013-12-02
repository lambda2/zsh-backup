/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memalloc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 17:28:33 by ksever            #+#    #+#             */
/*   Updated: 2013/11/23 17:32:26 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_memalloc(void)
{
	void	*memalloc_1;

	memalloc_1 = ft_memalloc(5);
	assert_true(memalloc_1 != NULL);
	free(memalloc_1);
}

