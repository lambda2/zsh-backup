/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <andre.aubin@lambdaweb.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/17 16:34:36 by aaubin            #+#    #+#             */
/*   Updated: 2013/07/17 17:00:50 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr (int nb)
{
	char to_display;
	if ( nb < 10 && nb > -10 )
	{
		if ( nb < 0 )
		{
			ft_putchar ( '-' );
			nb = nb * -1;
		}
		to_display = 48 + nb;
		ft_putchar ( to_display );
	}
	else
	{
		ft_putnbr ( nb / 10 );
		if ( nb < 0 )
			ft_putnbr ( -nb - ( ( -nb / 10 ) * 10 ) );
		else
			ft_putnbr ( nb - ( ( nb / 10 ) * 10 ) );
	}
}
