/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 13:19:40 by ksever            #+#    #+#             */
/*   Updated: 2013/11/23 13:23:09 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_strlen(void)
{
	assert_ulong_equal(ft_strlen(""), 0);
	assert_ulong_equal(ft_strlen("Test"), 4);
	assert_ulong_equal(ft_strlen("Test\0About"), 4);
	assert_ulong_equal(ft_strlen("Test\0About"), 4);
	assert_ulong_equal(ft_strlen("Test\tAbout"), 10);
}

