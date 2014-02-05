/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_splitter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambda2 <aaubin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/21 00:16:44 by lambda2           #+#    #+#             */
/*   Updated: 2014/01/21 00:17:08 by lambda2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"


static int		nb_words(char const *s)
{
	int			count;
	int			state;

	state = OUT;
	count = 0;
	while (*s)
	{
		if (state == OUT && *s != ' ' && *s != '\t' && *s != SEPARATOR_CHAR)
		{
			state = IN;
			++count;
		}
		if (state == IN && (*s == ' ' || *s == '\t' || *s == SEPARATOR_CHAR))
			state = OUT;
		++s;
	}
	return (count);
}

static void		copy_into_array(char **array, char const *s)
{
	int			state;
	int			beginning_word;
	int			i;

	state = OUT;
	i = 0;
	while (s[i])
	{
		if (state == OUT && s[i] != ' ' && s[i] != '\t'
				&& s[i] != SEPARATOR_CHAR)
		{
			state = IN;
			beginning_word = i;
		}
		if (state == IN
				&& (s[i] == ' ' || s[i] == '\t' || s[i] == SEPARATOR_CHAR))
		{
			state = OUT;
			*array = ft_strsub(s, beginning_word, i - beginning_word);
			++array;
		}
		++i;
	}
	if (state == IN)
		*array = ft_strsub(s, beginning_word, i - beginning_word);
}

char			**ft_asmsplit(char const *s)
{
	char		**ret;
	int			nb;

	nb = nb_words(s) + 1;
	ret = (char **)malloc(nb * sizeof(char *));
	if (ret)
	{
		copy_into_array(ret, s);
		ret[nb - 1] = 0;
	}
	return (ret);
}
