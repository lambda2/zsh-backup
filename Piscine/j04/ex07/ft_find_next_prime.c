/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <andre.aubin@lambdaweb.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/21 20:00:23 by aaubin            #+#    #+#             */
/*   Updated: 2013/07/22 09:55:50 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	is_prime;
	int	counter;
	is_prime = 1;
	counter = 2;
	while ( counter < nb && is_prime == 1)
	{
		if ( nb % counter == 0 )
			is_prime = 0;
		counter ++;
	}

	return is_prime;
}

int	ft_find_next_prime(int nb)
{
	int	is_prime;

	if ( nb < 2  || nb > 2147483647)
		return 0;

	is_prime = 0;
	while ( !is_prime )
	{
		if ( ( nb == 2 || nb % 2 != 0 ) && ft_is_prime ( nb ) )
			is_prime = 1;
		else
			nb = nb + 1;
	}
	return nb;
}
