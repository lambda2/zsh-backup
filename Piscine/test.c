/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <andre.aubin@lambdaweb.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/25 19:23:56 by aaubin            #+#    #+#             */
/*   Updated: 2013/07/25 19:24:30 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include "ft_takes_place.c"

int	main(int argc, char *argv[])
{
	ft_takes_place(atoi(argv[1]));
	return argc;
}
