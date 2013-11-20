/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <andre.aubin@lambdaweb.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/25 17:12:07 by aaubin            #+#    #+#             */
/*   Updated: 2013/07/25 21:47:34 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_string(char *str)
{
	int	counter;

	counter = 0;
	while ( str[counter] != '\0' )
	{
		ft_putchar(str[counter]);
		counter++;
	}
}

void	ft_print_words_tables(char **tab)
{
	int	counter;

	counter = 0;
	while ( tab[counter] != 0 )
	{
		ft_print_string(tab[counter]);
		ft_putchar('\n');
		counter++;
	}
}
