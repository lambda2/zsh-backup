/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_common.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 02:05:53 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/20 02:32:42 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft_test.h"

void	ft_generate_strings(int size, char *str, char *str_mod)
{
	int	counter;

	counter = 0;

	srand(time(0));
	while (counter < size) 
	{
		str[counter] = (rand() % 82) + 32;
		str_mod[counter] = str[counter];
		counter++;
	}
}




