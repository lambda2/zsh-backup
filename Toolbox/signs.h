/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signs.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <andre.aubin@lambdaweb.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/23 03:39:01 by aaubin            #+#    #+#             */
/*   Updated: 2013/07/23 03:45:29 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Debug lines for print colored status messages
 */


#include <stdio.h>

void	dbg(char *str) { printf("\033[34m [⍟]  %s \033[0m \n",str); }
void	warn(char *str) { printf("\033[31m [⚑]  %s \033[0m \n",str); }
void	success(char *str) { printf("\033[32m [⚐]  %s \033[0m \n",str); }


