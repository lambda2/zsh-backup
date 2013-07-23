/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <andre.aubin@lambdaweb.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/19 10:04:41 by aaubin            #+#    #+#             */
/*   Updated: 2013/07/22 21:47:55 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	long long	ret;

	ret = 1;
	if ( nb == 1 || nb == 0 )
		ret = nb;
	else if ( nb > 1 && nb < 13 )
		ret = nb * ft_recursive_factorial( nb - 1 );
	if ( nb <= 0 || nb >= 13 )
		ret = 0;
	return (int) ret;
}
