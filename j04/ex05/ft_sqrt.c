/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <andre.aubin@lambdaweb.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/21 05:45:45 by aaubin            #+#    #+#             */
/*   Updated: 2013/07/21 07:42:15 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	num;
	int	res;

	res = 1;
	num = 0;

	while ( num < nb && nb <= 2147395600 )
	{
		res ++;
		num = res * res;
	}
	if ( num == nb )
		return res;
	else
		return 0;
}
