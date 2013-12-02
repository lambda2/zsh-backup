/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 16:21:31 by ksever            #+#    #+#             */
/*   Updated: 2013/11/23 16:35:59 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_strncmp(void)
{
	assert_true(	strncmp("Longer here", "Longer he", 11) ==
				ft_strncmp("Longer here", "Longer he", 11));
	assert_true(	strncmp("Short", "Shorter first", 13) ==
				ft_strncmp("Short", "Shorter first", 13));
	assert_true(	strncmp("small caps", "Small Caps", 10) ==
				ft_strncmp("small caps", "Small Caps", 10));
	assert_true(	strncmp("Small Caps", "small caps", 10) ==
				ft_strncmp("Small Caps", "small caps", 10));
	assert_true(	strncmp("same here", "same here", 10) ==
				ft_strncmp("same here", "same here", 10));
	assert_true(strncmp("", "", 1) == ft_strncmp("", "", 1));
	assert_true(	strncmp("same until diff", "same until Diff", 11) ==
				ft_strncmp("same until diff", "same until Diff", 11));
	assert_true(	strncmp("same until diff", "same until Diff", 12) ==
				ft_strncmp("same until diff", "same until Diff", 12));
	assert_true(	strncmp("same until Diff", "same until diff", 11) ==
				ft_strncmp("same until Diff", "same until diff", 11));
	assert_true(	strncmp("same until Diff", "same until diff", 12) ==
				ft_strncmp("same until Diff", "same until diff", 12));
	assert_true(	strncmp("short", "shorter", 5) ==
				ft_strncmp("short", "shorter", 5));
	assert_true(	strncmp("short", "shorter", 6) ==
				ft_strncmp("short", "shorter", 6));
}

