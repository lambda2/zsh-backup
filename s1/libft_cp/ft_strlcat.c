/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 08:24:19 by aaubin            #+#    #+#             */
/*   Updated: 2013/12/12 09:06:25 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_inc_counters(char **dest_copy, size_t *counter)
{
	while (**dest_copy != '\0' && *counter != 0)
	{
		(*counter)--;
		(*dest_copy)++;
	}
}

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*dest_copy;
	const char	*src_copy;
	size_t		counter;
	size_t		dest_len;

	dest_copy = dst;
	src_copy = src;
	counter = size;
	ft_inc_counters(&dest_copy, &counter);
	dest_len = dest_copy - dst;
	counter = size - dest_len;
	if (counter == 0)
		return (ft_strlen(src_copy) + dest_len);
	while (*src_copy != '\0')
	{
		if (counter != 1)
		{
			*dest_copy = *src_copy;
			dest_copy++;
			counter--;
		}
		src_copy++;
	}
	*dest_copy = '\0';
	return ((src_copy - src) + dest_len);
}

