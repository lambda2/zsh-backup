/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <andre.aubin@lambdaweb.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/20 01:54:47 by aaubin            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2013/07/22 21:58:48 by aaubin           ###   ########.fr       */
=======
/*   Updated: 2013/07/21 05:17:10 by aaubin           ###   ########.fr       */
>>>>>>> 258e77eb4647b9156dcb0341ad636ec9dd539863
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
<<<<<<< HEAD
	unsigned long long	buffer;

	buffer = nb;
	if ( power < 0 )
		return 0;
	else if ( power == 0 )
		return 1;

	if ( power > 1 )
	{
		buffer = buffer * ft_recursive_power(buffer, power - 1);
=======
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
>>>>>>> 258e77eb4647b9156dcb0341ad636ec9dd539863
	}
	return buffer;
}
