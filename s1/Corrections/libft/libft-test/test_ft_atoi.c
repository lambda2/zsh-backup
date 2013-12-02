/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 13:44:24 by ksever            #+#    #+#             */
/*   Updated: 2013/11/24 20:20:26 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_atoi(void)
{
	assert_int_equal(123456789, ft_atoi("123456789"));
	assert_int_equal(123456789, ft_atoi("+123456789"));
	assert_int_equal(-123456789, ft_atoi("-123456789"));
	assert_int_equal(0, ft_atoi("-+123"));
	assert_int_equal(0, ft_atoi("+-123"));
	assert_int_equal(15, ft_atoi(" \t \v \r 15 17845.147 \r \n \f \n\n "));
	assert_int_equal(-16748, ft_atoi(" \t  -16748,745513"));
	assert_int_equal(2147483647, ft_atoi(" \t 2147483647 \t "));
	assert_int_equal(-83, ft_atoi(" +214748364717 "));
}

