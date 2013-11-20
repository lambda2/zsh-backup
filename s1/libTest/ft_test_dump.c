/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_dump.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 02:08:15 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/20 02:09:32 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"


void	ft_dump_mem(void *start, int length)
{
	int	counter;
	int	*save;

	counter = 0;
	save = start;

	while (counter < length)
	{
		printf("[%i]",*save);
		save ++;
		counter++;
	}
	printf(" -> ");
	counter = 0;
	save = start;

	while (counter < length)
	{
		printf("[%c]",*save);
		save ++;
		counter++;
	}
}


