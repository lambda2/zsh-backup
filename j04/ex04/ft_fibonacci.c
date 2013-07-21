/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <andre.aubin@lambdaweb.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/20 02:51:51 by aaubin            #+#    #+#             */
/*   Updated: 2013/07/21 05:37:31 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if ( index < 0 || index > 46 )
		return -1;
	else if ( index == 0 || index == 1 )
	{
		return index;
	}
	else
	{
		return ft_fibonacci( index - 1 ) + ft_fibonacci( index - 2 );
	}
}
