/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <andre.aubin@lambdaweb.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/19 10:04:41 by aaubin            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2013/07/22 21:47:55 by aaubin           ###   ########.fr       */
=======
/*   Updated: 2013/07/21 04:19:23 by aaubin           ###   ########.fr       */
>>>>>>> 258e77eb4647b9156dcb0341ad636ec9dd539863
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	long long	ret;

	ret = 1;
<<<<<<< HEAD
	if ( nb == 1 || nb == 0 )
		ret = nb;
	else if ( nb > 1 && nb < 13 )
		ret = nb * ft_recursive_factorial( nb - 1 );
	if ( nb <= 0 || nb >= 13 )
		ret = 0;
=======

	if ( nb == 1 )
		ret = nb;
	else if ( nb > 1 && nb < 13 )
		ret = nb * ft_recursive_factorial( nb - 1 );
	
	if ( nb < 0 || nb >= 13 )
		ret = 0;

>>>>>>> 258e77eb4647b9156dcb0341ad636ec9dd539863
	return (int) ret;
}
