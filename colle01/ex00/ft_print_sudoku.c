/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_sudoku.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <andre.aubin@lambdaweb.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/27 19:15:54 by aaubin            #+#    #+#             */
/*   Updated: 2013/07/27 20:35:18 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print_sudoku.h"

void	ft_printstr(char *str)
{
	int	counter;

	counter = 0;
	while ( str[counter] != '\0' )
	{
		write(1, &(str[counter]), 1);
		counter++;
	}
}

void	ft_print_sudoku(int **tab )
{
	int	counter;
	int	char_counter;

	counter = 0;
	while ( counter < 9 )
	{
		char_counter = 0;
		while ( char_counter < 9 )
		{
			ft_print_colored_value(tab[counter][char_counter],0);
			char_counter++;
		}
		ft_printstr("\n");
		counter++;
	}
}


void	ft_print_colored_sudoku(int **tab )
{
	int	counter;
	int	char_counter;

	counter = 0;
	ft_printstr("┌─────────┬─────────┬─────────┐\n");
	while ( counter < 9 )
	{
		char_counter = 0;
		if ( counter % 3 == 0 && counter > 0)
		{
			ft_printstr("├─────────┼─────────┼─────────┤\n");
		}
		while ( char_counter < 9 )
		{
			if ( char_counter % 3 == 0 )
			{
				ft_printstr("│");
			}
			ft_print_colored_value(tab[counter][char_counter], 1);
			char_counter++;
		}
		ft_printstr("│\n");
		counter++;
	}
	ft_printstr("└─────────┴─────────┴─────────┘\n");
}

void	ft_print_colored_value(int value, int colored)
{
	char	c;

	c = value + 48;
	if ( colored == 1 )
	{
		if ( value == 0 )
		{
			ft_printstr("\033[31m . \033[0m");
		}
		else
		{
			ft_printstr("\033[34m ");
			ft_printstr(&c);
			ft_printstr(" \033[0m");
		}
	}
	else
	{
		ft_printstr(" ");
		ft_printstr(&c);
		ft_printstr(" ");
	}
}
