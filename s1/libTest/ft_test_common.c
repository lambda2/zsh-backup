/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_common.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 02:05:53 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/20 06:56:10 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft_test.h"

void	ft_generate_string(int size, char *str)
{
	int	counter;

	counter = 0;

	while (counter < size-1) 
	{
		str[counter] = (rand() % 26) + 97;
		counter++;
	}
	str[counter] = '\0';
}

void	ft_generate_strings(int size, char *str, char *str_mod)
{
	int	counter;

	counter = 0;

	while (counter < size-1) 
	{
		str[counter] = (rand() % 82) + 32;
		str_mod[counter] = str[counter];
		counter++;
	}
	str[counter] = '\0';
}




