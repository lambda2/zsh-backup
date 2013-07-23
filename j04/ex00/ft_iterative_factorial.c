/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <andre.aubin@lambdaweb.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2013/07/19 10:04:41 by aaubin            #+#    #+#             */
/*   Updated: 2013/07/22 21:48:51 by aaubin           ###   ########.fr       */
=======
/*   Created: 2013/07/20 01:26:03 by aaubin            #+#    #+#             */
/*   Updated: 2013/07/21 04:05:28 by aaubin           ###   ########.fr       */
>>>>>>> 258e77eb4647b9156dcb0341ad636ec9dd539863
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	long long	ret;
<<<<<<< HEAD
	int			counter;
	
	counter	=	nb;
	ret		=	nb;
	if ( nb <= 0 || nb > 13 )
		return 0;
	while ( --counter > 1 )
		ret = ret * counter;
=======

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
>>>>>>> 258e77eb4647b9156dcb0341ad636ec9dd539863
	return (int) ret;
}
