/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <andre.aubin@lambdaweb.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/20 01:26:03 by aaubin            #+#    #+#             */
/*   Updated: 2013/07/21 04:05:28 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	long long	ret;

	ret = 1;
	if ( nb < 0 )
		ret = 0;
	while ( nb > 0 )
	{
		ret = ret * nb;
		nb = nb - 1;
	}
	if ( ret > 2147483647 )
		ret = 0;
	return (int) ret;
}
