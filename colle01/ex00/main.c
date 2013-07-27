/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <andre.aubin@lambdaweb.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/27 11:05:56 by aaubin            #+#    #+#             */
/*   Updated: 2013/07/27 20:34:01 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_resolve_sudoku.h"
#include "ft_print_sudoku.h"

int	main(int argc, char **argv)
{
	int		counter;
	int		**sudoku;

	counter = 0;
	sudoku = (int**) malloc( sizeof(int**) * 9 );
	while ( counter < 9 )
	{
		sudoku[counter] = (int*) malloc( sizeof(int *) * 9);
		counter++;
	}
	if ( ft_fill_array(argc, argv, sudoku) && ft_resolve_sudoku(sudoku) )
	{
		ft_print_colored_sudoku(sudoku);
	}
	else
	{
		ft_printstr("Erreur.\n");
	}
	return (0);
}
