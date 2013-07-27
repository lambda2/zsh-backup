/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_sudoku.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <andre.aubin@lambdaweb.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/27 15:44:59 by aaubin            #+#    #+#             */
/*   Updated: 2013/07/27 16:57:41 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TEST_SUDOKU_H
# define FT_TEST_SUDOKU_H

#include "ft_resolve_sudoku.h"

/*
** Will check if the given num is not on the given line, the given
** column and his delimited 3x3 square.
** On this case, return 1 (True), 0 (False) otherwise.
*/
int	ft_test_sudoku (int num, int **grid, int line, int column);

/*
** Returns True (1) if the given num is not on the given line.
** Otherwise, returns False (0).
*/
int	ft_is_not_on_line (int num, int **grid, int line);

/*
** Returns True (1) if the given num is not on the given column.
** Otherwise, returns False (0).
*/
int	ft_is_not_on_column (int num, int **grid, int column);

/*
** Will try to find if the given number already exists in
** the nearest square.
** If it's the case, returns 1, else returns 0;
*/
int	ft_is_not_on_square (int num, int **grid, int line, int column );

#endif
