/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 13:43:43 by ksever            #+#    #+#             */
/*   Updated: 2013/11/27 15:22:09 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_strcmp(void)
{
	assert_true(	strcmp("Longer here", "Longer he") ==
				ft_strcmp("Longer here", "Longer he"));
	assert_true(	strcmp("Short", "Shorter first") ==
				ft_strcmp("Short", "Shorter first"));
	assert_true(	strcmp("small caps", "Small Caps") ==
				ft_strcmp("small caps", "Small Caps"));
	assert_true(	strcmp("Small Caps", "small caps") ==
				ft_strcmp("Small Caps", "small caps"));
	assert_true(	strcmp("same here", "same here") ==
				ft_strcmp("same here", "same here"));
	assert_true(strcmp("", "") == ft_strcmp("", ""));
}

