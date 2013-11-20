/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve_sudoku.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <andre.aubin@lambdaweb.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/27 15:29:18 by aaubin            #+#    #+#             */
/*   Updated: 2013/07/27 20:57:13 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RESOLVE_SUDOKU_H
# define FT_RESOLVE_SUDOKU_H

# include <stdlib.h>
# include "ft_test_sudoku.h"


/*
** Will allocate a 9x9 array with the given values.
** If an error occurs, returns 0, 1 otherwise.
*/
int	ft_fill_array(int count, char **argv, int **array);

/*
** Initiate the sudoku resolution.
** Just launch the ft_check_pos recursive process with the position 0.
*/
int	ft_resolve_sudoku(int **grid);

/*
** Will try to recusrvively solve the grid, by trying all possibles
** combinaisons.
*/
int	ft_check_pos(int pos, int **grid);

/*
** Will test the solution and assignate the value if the solution pass.
*/
int	ft_validate_pos(int pos, int **grid);

#endif
