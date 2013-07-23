/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <andre.aubin@lambdaweb.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/19 10:04:41 by aaubin            #+#    #+#             */
/*   Updated: 2013/07/22 21:48:51 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	long long	ret;
	int			counter;
	
	counter	=	nb;
	ret		=	nb;
	if ( nb <= 0 || nb > 13 )
		return 0;
	while ( --counter > 1 )
		ret = ret * counter;
	return (int) ret;
}
