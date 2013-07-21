/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <andre.aubin@lambdaweb.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/20 01:54:47 by aaubin            #+#    #+#             */
/*   Updated: 2013/07/21 05:17:14 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	long long	ret;
	
	ret = nb;
	if ( nb < 0 )
		ret = 0;
	while ( power > 1 )
	{
		ret = ret * nb;

		if ( ret > 2147483646 )
		{
			power = 1;
			ret = 0;
		}
		power = power - 1;
	}
	return ret;
}
