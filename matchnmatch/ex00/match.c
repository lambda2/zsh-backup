/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <andre.aubin@lambdaweb.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/24 04:51:40 by aaubin            #+#    #+#             */
/*   Updated: 2013/07/24 07:23:29 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*str_buffer;
	char	*substr_buffer;
	int		escape;

	escape = 0;
	if (*to_find == 0)
		return (str);
	while ( *str != 0 )
	{
		substr_buffer = to_find;
		escape = 0;
		if ( *str != *substr_buffer )
			escape = 1;
		else
			str_buffer = str;
		while ( escape == 0 )
		{
			if ( *substr_buffer == 0 )
				return (str);
			( *str_buffer++ != *substr_buffer++ ) ? escape = 1 : 0;
		}
		( escape == 0 ) ? substr_buffer = to_find : 0;
		str = str + 1;
	}
	return (NULL);
}

int		ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while ( str[counter] != '\0' )
		counter++;
	return counter;
}

int		ft_split(char *str, const char c)
{
	int	counter;
	int	splitters;

	counter = 0;
	splitters = 0;

	while ( str[counter] != '\0' )
	{
		if ( str[counter] == c )
		{
			str[counter] = '\0';
			splitters ++;
		}
		counter ++;
	}
	return splitters;
}

int		match(char *s1, char *s2)
{
	int	counter;
	int match;
	int segments;
	int	str_lenght;
	int	expr_lenght;

	counter = 0;
	segments = ft_split(s2, '*');;
	match = 1;
	str_lenght = ft_strlen(s1);
	expr_lenght = ft_strlen(s2);

	printf("Pattern : %s (taille : %i caracteres)\n",s2,expr_lenght);
	printf("Chaine : %s (taille : %i caracteres)\n",s1,str_lenght);
	printf("Le pattern a été découpé en %i segment(s)\n",segments);

	while ( segments > 0 && counter < 50)
	{
		while ( s2[counter] != '\0' )
		{
			printf(" %c ", s2[counter]);
			counter ++;
		}
		counter ++;
		printf(" EOL \n");
		segments--;
	}
	return match;
}
