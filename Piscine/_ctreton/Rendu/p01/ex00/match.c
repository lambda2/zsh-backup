/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctreton <corentintreton@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/28 05:30:57 by ctreton           #+#    #+#             */
/*   Updated: 2013/07/28 06:03:19 by ctreton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i != '\0' && ret != 8)
	{
		if (s2[i] != '*')
		{
			if (s2[i] != s1[j])
			{
				return (0);
			}
			j++;
		}
		else
		{
			if (s2[i + 1] == '\0')
			{
				return (1);
			}
			i++;
			while (s2[i] == '*')
			{
				//rappelle fonction en recursif
			}
			j++;
		}
		i++;
	}
	return (1);
}
