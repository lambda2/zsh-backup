/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_results.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 02:10:39 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/20 02:26:39 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"


void	ft_digest_results(int *r, int re)
{
	if (re)
		r[0] ++;
	else
		r[1] ++;
}

int		*ft_init_tests(char *name)
{
	int	*results;

	results = malloc(sizeof(int) * 2);
	results[0] = 0;
	results[1] = 0;
	printf("\033[1;34m======== [LAUNCHING TESTS FOR %s] ======== \033[0;39m\n", name);

	return (results);
}

void	ft_end_tests(char *name, int *results)
{
	int	success;
	int	failures;

	success		=	results[0];
	failures	=	results[1];

	printf("RESULTS FOR \033[1;33m %s \033[0;39m : ", name);
	printf("\033[1;32m %i Success\033[1;39m, ", success);
	printf("\033[1;31m %i failure(s)\033[1;39m. \n", failures);
}
