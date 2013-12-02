/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnequ.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 22:24:47 by ksever            #+#    #+#             */
/*   Updated: 2013/11/25 19:47:35 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_strnequ(void)
{
	assert_false(ft_strnequ("Longer here", "Longer he", 11));
	assert_false(ft_strnequ("Short", "Shorter first", 13));
	assert_false(ft_strnequ("small caps", "Small Caps", 10));
	assert_false(ft_strnequ("Small Caps", "small caps", 10));
	assert_true(ft_strnequ("same here", "same here", 10));
	assert_true(ft_strnequ("", "", 1));
	assert_true(ft_strnequ("", "", 3));
	assert_true(ft_strnequ("same until diff", "same until Diff", 11));
	assert_false(ft_strnequ("same until diff", "same until Diff", 12));
	assert_true(ft_strnequ("same until Diff", "same until diff", 11));
	assert_false(ft_strnequ("same until Diff", "same until diff", 12));
	assert_true(ft_strnequ("short", "shorter", 5));
	assert_false(ft_strnequ("short", "shorter", 6));
}

