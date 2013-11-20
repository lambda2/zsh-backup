/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <andre.aubin@lambdaweb.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/28 05:28:30 by aaubin            #+#    #+#             */
/*   Updated: 2013/07/28 05:52:33 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* ********************  char to int conversions functions  ***************** */

int		ft_char_2_int(char c)
{
	return ( (int) c - 48 );
}

char	ft_int_2_char(int nbr)
{
	return ( (char) nbr + 48 );
}

/*
**	will convert the given string to an integer.
*/
int		ft_str_2_int(char *string)
{
	int		negative;
	int		value;
	char	*index;

	negative	= 1;
	value		= 0;
	*index		= string;

	if (*index == '-')
	{
		negative = -1;
		index++;
	}
	while (*index != '\0')
	{
		if (*index >= '0' && *index <= '9')
		{
			value = value * 10 + ((int)*index - '0');
		}
		index++;
	}
	(negative==-1) ? (value = -value) : 0;

	return (value);
}

char	*ft_int_2_str(int nbr);

int     ft_pow(int val, int pow)
{
	int   res;
	int   i;

	if (!pow)
		return (1);
	res = val;
	for (i = 2; i <= pow; ++i)
		res *= val;
	return (res);
}

