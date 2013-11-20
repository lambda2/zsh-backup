/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <andre.aubin@lambdaweb.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/20 02:51:51 by aaubin            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2013/07/22 22:01:48 by aaubin           ###   ########.fr       */
=======
/*   Updated: 2013/07/21 05:37:31 by aaubin           ###   ########.fr       */
>>>>>>> 258e77eb4647b9156dcb0341ad636ec9dd539863
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
