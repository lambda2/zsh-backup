/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_sudoku.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <andre.aubin@lambdaweb.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/27 15:29:18 by aaubin            #+#    #+#             */
/*   Updated: 2013/07/27 21:06:35 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_SUDOKU_H
# define FT_PRINT_SUDOKU_H

# include <unistd.h>

/*
** Will print on the standard output the given string.
*/
void	ft_printstr(char *str);

/*
** Will print a graphical representation of the given grid
*/
void	ft_print_sudoku(int **tab);

/*
** Will print a colored graphical representation of the given grid
*/
void	ft_print_colored_sudoku(int **tab);

/*
** Will print the given value to the standard ouput.
** If the [colored] parameter is set to 1 (true), this
** output will be colored.
*/
void	ft_print_colored_value(int value, int colored);

#endif
