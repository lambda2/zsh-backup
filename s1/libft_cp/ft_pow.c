/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 08:56:30 by aaubin            #+#    #+#             */
/*   Updated: 2013/12/12 09:21:37 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

int	ft_pow(int base, int exp)
{
	int	result = 1;
	while (exp)
	{
		result *= base;
		exp--;
	}
	return (result);
}