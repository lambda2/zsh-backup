/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <andre.aubin@lambdaweb.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/24 15:59:57 by aaubin            #+#    #+#             */
/*   Updated: 2013/07/25 17:29:34 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		size;
	char	*to_fill;

	size = 0;
	while ( src[size] != '\0' )
		size++;
	to_fill = malloc(sizeof(char) * size + 1);
	to_fill[size] = '\0';
	while ( size >= 0 )
	{
		to_fill[size] = src[size];
		size--;
	}
	return (to_fill);
}
