/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 08:25:53 by aaubin            #+#    #+#             */
/*   Updated: 2013/12/12 08:25:56 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char	*str)
{
	unsigned int	digit;
	unsigned int	go_away;
	int				positive;
	int				value;

	value = 0;
	go_away = 0;
	digit = 0;
	while ( *str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
			|| *str == '\r' || *str == '\f')
		str++;
	positive = (*str == '-' ? -1 : 1);
	if ( *str == '-' || *str == '+')
		str++;
	while (*str == '0')
		str++;
	if ( ft_strlen(str) > 19 )
		return (positive == 1 ? -1 : 0);
	while (ft_isdigit (*str) && *str != '\0')
	{
		digit = (int) (*str - '0');
		value = (value	*10) + digit;
		str++;
	}
	return (value	*positive);
}
