/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 19:10:26 by ksever            #+#    #+#             */
/*   Updated: 2013/11/25 14:15:04 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_itoa(void)
{
	assert_string_equal("123", ft_itoa(123));
	assert_string_equal("-123", ft_itoa(-123));
	assert_string_equal("0", ft_itoa(0));
	assert_string_equal("0", ft_itoa(-0));
	assert_string_equal("2147483647", ft_itoa(2147483647));
	assert_string_equal("-2147483648", ft_itoa(-2147483648));
}

