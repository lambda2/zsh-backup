/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <andre.aubin@lambdaweb.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/20 01:54:47 by aaubin            #+#    #+#             */
/*   Updated: 2013/07/22 21:58:48 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	unsigned long long	buffer;

	buffer = nb;
	if ( power < 0 )
		return 0;
	else if ( power == 0 )
		return 1;

	if ( power > 1 )
	{
		buffer = buffer * ft_recursive_power(buffer, power - 1);
	}
	return buffer;
}
