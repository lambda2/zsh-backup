/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <andre.aubin@lambdaweb.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/20 01:54:47 by aaubin            #+#    #+#             */
/*   Updated: 2013/07/21 05:17:10 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	long long	buffer;

	buffer = nb;
	if ( buffer <= 0 )
		return 0;

	if ( power >= 1 )
	{
		buffer = buffer * ft_recursive_power(buffer, power - 1);
		if ( buffer > 2147483646 )
		{
			power = 1;
			buffer = 0;
		}
	}
	return buffer;
}
