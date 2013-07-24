/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <andre.aubin@lambdaweb.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/24 16:09:21 by aaubin            #+#    #+#             */
/*   Updated: 2013/07/24 17:23:15 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	int	*range_array;
	int	range;
	int	counter;

	range = max - min;
	if ( range > 0 )
	{
		range_array = malloc( sizeof(int) * range );
		while ( counter < range )
		{
			range_array[counter] = counter;
			counter ++;
		}
	}
	return range_array;
}
