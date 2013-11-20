/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <andre.aubin@lambdaweb.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/24 17:29:48 by aaubin            #+#    #+#             */
/*   Updated: 2013/07/25 21:46:41 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*range_array;
	int	range_count;
	int	counter;

	range_count = max - min;
	if ( range_count > 0 )
	{
		range_array = malloc( sizeof(int) * range_count );
		while ( counter < range_count )
		{
			range_array[counter] = min + counter;
			counter++;
		}
	}
	*range = range_array;
	return (counter);
}
