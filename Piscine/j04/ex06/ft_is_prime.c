/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <andre.aubin@lambdaweb.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/21 07:46:48 by aaubin            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2013/07/22 10:02:25 by aaubin           ###   ########.fr       */
=======
/*   Updated: 2013/07/21 08:37:20 by aaubin           ###   ########.fr       */
>>>>>>> 258e77eb4647b9156dcb0341ad636ec9dd539863
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	is_prime;
	int	counter;

	if ( nb < 2 )
		return 0;

	is_prime = 1;
	counter = 2;
	while ( counter < nb && is_prime == 1)
	{
		if ( nb % counter == 0 )
<<<<<<< HEAD
			is_prime = 0;
=======
		{
			is_prime = 0;
		}
>>>>>>> 258e77eb4647b9156dcb0341ad636ec9dd539863
		counter ++;
	}

	return is_prime;
}
