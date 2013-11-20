/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <andre.aubin@lambdaweb.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/24 20:15:36 by aaubin            #+#    #+#             */
/*   Updated: 2013/07/25 21:51:12 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_allocate_str_array(char *str, int lenght)
{
	int		counter;
	int		words;
	char	**tab;

	words = 0;
	counter = 0;

	while ( counter < lenght )
	{
		if ( str[counter] == '\0' )
		{
			words++;
		}
		counter++;
	}
	tab = malloc ( sizeof(char*) * words + 1 );
	return (tab);
}

char	**ft_generate_str_array(char *str, int lenght)
{
	int		counter;
	int		words;
	char	*marker;
	char	**tab;

	marker = str;
	counter = 0;
	tab = ft_allocate_str_array(str, lenght);
	words = 0;
	while ( counter < lenght )
	{
		if ( str[counter] == '\0' )
		{
			if ( counter == lenght - 1 || str[counter+1] != '\0' )
			{
				tab[words] = marker;
				words++;
				marker = &str[counter + 1];
			}
		}
		counter++;
	}
	tab[words] = 0;
	return (tab);
}

char	*ft_apply_filters(char *str, int lenght)
{
	int		counter;
	char	*ret;

	ret = malloc( sizeof(char) * (lenght + 1) );
	counter = 0;
	while ( counter < lenght )
	{
		if ( str[counter] == ' ' || str[counter] == '\n'
				|| str[counter] == '\t' )
		{
			ret[counter] = '\0';
		}
		else
		{
			ret[counter] = str[counter];
		}
		counter++;
	}
	return (ret);
}

char	**ft_split_whitespaces(char *str)
{
	int		org_lenght;
	char	*tmp;
	char	**tab;

	org_lenght = 0;
	while ( str[org_lenght++] != '\0' )
	{
		;
	}

	tmp = ft_apply_filters( str, org_lenght );
	tab = ft_generate_str_array( tmp, org_lenght );
	return (tab);
}
