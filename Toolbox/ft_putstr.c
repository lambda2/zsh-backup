/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/18 14:51:44 by aaubin            #+#    #+#             */
/*   Updated: 2013/07/18 15:04:15 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str)
{
	while ( *str != '\0' || *str != 0 )
	{
		ft_putchar(*str);
		str++;
	}
}