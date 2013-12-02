/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 22:52:30 by ksever            #+#    #+#             */
/*   Updated: 2013/11/23 23:01:31 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_strjoin(void)
{
	assert_string_equal("Nothing Matters", ft_strjoin("Nothing ", "Matters"));
	assert_string_equal("Something", ft_strjoin("Some", "thing"));
	assert_string_equal("After", ft_strjoin("", "After"));
	assert_string_equal("Some", ft_strjoin("Some", ""));
	assert_string_equal("", ft_strjoin("", ""));
}

