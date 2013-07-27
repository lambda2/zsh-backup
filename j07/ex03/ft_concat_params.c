/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <andre.aubin@lambdaweb.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/24 18:44:33 by aaubin            #+#    #+#             */
/*   Updated: 2013/07/25 21:49:06 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while ( str[counter++] != '\0' )
	{
		;
	}
	return (counter);
}

/*
 ** Will return the right size to allocate for
 ** concatenate the given parameters.
 */
int		ft_get_args_memsize(int argc, char **argv)
{
	int	counter;
	int	size;

	size = 0;
	counter = 0;
	while ( counter < argc )
	{
		size = size + ft_strlen(argv[counter]);
		counter++;
	}
	return (size + 1);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		counter;
	int		size;
	char	*ret_str;

	counter = 0;
	size = ft_get_args_memsize(argc, argv);
	ret_str = malloc( sizeof(char) * size);
	while ( counter < size - 1 )
	{
		if ( argv[0][counter] == '\0' && counter != (size - 2) )
		{
			ret_str[counter] = '\n';
		}
		else
		{
			ret_str[counter] = argv[0][counter];
		}
		counter++;
	}
	ret_str[size - 1] = '\0';
	return (ret_str);
}
