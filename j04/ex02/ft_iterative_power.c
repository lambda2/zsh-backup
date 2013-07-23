/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <andre.aubin@lambdaweb.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/20 01:54:47 by aaubin            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2013/07/22 21:50:29 by aaubin           ###   ########.fr       */
=======
/*   Updated: 2013/07/21 05:17:14 by aaubin           ###   ########.fr       */
>>>>>>> 258e77eb4647b9156dcb0341ad636ec9dd539863
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
<<<<<<< HEAD
	unsigned long long	ret;
=======
	long long	ret;
>>>>>>> 258e77eb4647b9156dcb0341ad636ec9dd539863
	
	ret = nb;
	if ( nb < 0 )
		ret = 0;
	while ( power > 1 )
	{
		ret = ret * nb;
<<<<<<< HEAD
		power = power - 1;
	}
	return (int) ret;
=======

		if ( ret > 2147483646 )
		{
			power = 1;
			ret = 0;
		}
		power = power - 1;
	}
	return ret;
>>>>>>> 258e77eb4647b9156dcb0341ad636ec9dd539863
}
