/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_sudoku.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <andre.aubin@lambdaweb.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/27 15:29:18 by aaubin            #+#    #+#             */
/*   Updated: 2013/07/27 19:34:36 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_SUDOKU_H
# define FT_PRINT_SUDOKU_H

#include <unistd.h>
#include <stdio.h>

void	ft_printstr(char *str);

/*
** Will print a graphical representation of the given grid
*/
void	ft_print_sudoku(int **tab);

void	ft_print_colored_sudoku(int **tab );

void	ft_print_colored_value(int value, int colored);

#endif
