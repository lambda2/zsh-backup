/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <andre.aubin@lambdaweb.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/21 07:46:48 by aaubin            #+#    #+#             */
/*   Updated: 2013/07/21 08:37:20 by aaubin           ###   ########.fr       */
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
		{
			is_prime = 0;
		}
		counter ++;
	}

	return is_prime;
}
