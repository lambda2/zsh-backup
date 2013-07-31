/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve_sudoku.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <andre.aubin@lambdaweb.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/27 11:06:35 by aaubin            #+#    #+#             */
/*   Updated: 2013/07/27 20:55:23 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_test_sudoku.h"

/*
** Will check if the given num is not on the given line, the given
** column and his delimited 3x3 square.
** On this case, return 1 (True), 0 (False) otherwise.
*/
int	ft_test_sudoku(int num, int **grid, int line, int column)
{
	if ( ft_is_not_on_line(num, grid, line) &&
			ft_is_not_on_column(num, grid, column) &&
			ft_is_not_on_square(num, grid, line, column) )
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*
** Returns True (1) if the given num is not on the given line.
** Otherwise, returns False (0).
*/
int	ft_is_not_on_line(int num, int **grid, int line)
{
	int	counter;
	int	is_not;

	counter	= 0;
	is_not	= 1;
	while ( counter < 9 )
	{
		if ( grid[line][counter] == num )
		{
			is_not = 0;
		}
		counter++;
	}
	return (is_not);
}

/*
** Returns True (1) if the given num is not on the given column.
** Otherwise, returns False (0).
*/
int	ft_is_not_on_column(int num, int **grid, int column)
{
	int	counter;
	int	is_not;

	counter	= 0;
	is_not	= 1;
	while ( counter < 9 )
	{
		if ( grid[counter][column] == num )
		{
			is_not = 0;
		}
		counter++;
	}
	return (is_not);
}

/*
** Will try to find if the given number already exists in
** the nearest square.
** If it's the case, returns 1, else returns 0;
*/
int	ft_is_not_on_square(int num, int **grid, int line, int column)
{
	int	line_counter;
	int	line_limit;
	int	column_counter;
	int	column_limit;

	line_counter = 3 * (line / 3);
	line_limit = line_counter + 3;
	while ( line_counter < line_limit )
	{
		column_counter = 3 * (column / 3);
		column_limit = column_counter + 3;
		while ( column_counter < column_limit )
		{
			if ( grid[line_counter][column_counter] == num )
			{
				return (0);
			}
			column_counter++;
		}
		line_counter++;
	}
	return (1);
}
