/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve_sudoku.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <andre.aubin@lambdaweb.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/27 11:06:35 by aaubin            #+#    #+#             */
/*   Updated: 2013/07/27 20:19:27 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_resolve_sudoku.h"

/*
** Initiate the sudoku resolution.
** Just launch the ft_check_pos recursive process with the position 0.
*/
int	ft_resolve_sudoku(int **grid)
{
	return (ft_check_pos(0, grid));
}

int	ft_fill_array(int count, char **argv, int **array)
{
	int		counter;
	int		char_counter;
	char	charac;

	if ( count < 10 || array == 0 )
	{
		return (0);
	}
	counter = 1;
	while ( counter < count )
	{
		char_counter = 0;
		while ( char_counter < 9 )
		{
			charac = argv[counter][char_counter];
			if ( charac == '.' )
			{
				charac = '0';
			}
			array[counter-1][char_counter] = charac - 48;
			char_counter++;
		}
		counter++;
	}
	return (1);
}

/*
** Will try to recusrvively solve the grid,
** by trying all possibles combinaisons.
*/
int	ft_check_pos (int pos, int **grid)
{
	int	line;
	int	column;
	
	line = pos / 9;
	column = pos % 9;

	if ( pos >= 81 )
	{
		return (1);
	}
	else if ( grid[line][column] != 0 )
	{
		return (ft_check_pos(pos + 1, grid ));
	}
	else
	{
		return ( ft_validate_pos(pos, grid) );
	}
}

/*
** Will test the solution and assignate the value if
** the solution pass.
*/
int	ft_validate_pos(int pos, int **grid)
{
	int	line;
	int	column;
	int	counter;
	
	line = pos / 9;
	column = pos % 9;
	counter = 1;
	while ( counter < 10 )
	{
		if (  ft_test_sudoku(counter, grid, line, column) )
		{
			grid[line][column] = counter;
			if ( ft_check_pos(pos + 1, grid) )
			{
				return (1);
			}
		}
		counter++;
	}
	grid[line][column] = 0;
	return (0);
}
