/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <andre.aubin@lambdaweb.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/21 05:45:45 by aaubin            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2013/07/22 10:04:39 by aaubin           ###   ########.fr       */
=======
/*   Updated: 2013/07/21 07:42:15 by aaubin           ###   ########.fr       */
>>>>>>> 258e77eb4647b9156dcb0341ad636ec9dd539863
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	num;
	int	res;

	res = 1;
	num = 0;
<<<<<<< HEAD
	if ( nb == 0 || nb == 1 )
		return nb;
=======
>>>>>>> 258e77eb4647b9156dcb0341ad636ec9dd539863

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
