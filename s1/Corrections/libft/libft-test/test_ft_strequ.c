/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strequ.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 22:21:12 by ksever            #+#    #+#             */
/*   Updated: 2013/11/23 22:23:44 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_strequ(void)
{
	assert_false(ft_strequ("Longer here", "Longer he"));
	assert_false(ft_strequ("Short", "Shorter first"));
	assert_false(ft_strequ("small caps", "Small Caps"));
	assert_false(ft_strequ("Small Caps", "small caps"));
	assert_true(ft_strequ("same here", "same here"));
	assert_true(ft_strequ("", ""));
}

