/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_asserts.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 02:05:51 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/20 02:21:40 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int		ft_assert_same_memory(const void *s1, const void *s2, size_t n)
{
	if(memcmp(s1, s2, n) == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

