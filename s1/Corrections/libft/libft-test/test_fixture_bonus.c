/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_fixture_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 19:02:37 by ksever            #+#    #+#             */
/*   Updated: 2013/12/02 12:05:17 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_fixture_bonus(void)
{
	test_fixture_start();
	run_test(test_ft_lstnew);
	run_test(test_ft_lstdelone);
	run_test(test_ft_lstdel);
	run_test(test_ft_lstadd);
	run_test(test_ft_lstiter);
	run_test(test_ft_lstmap);

	run_test(test_ft_strdupcat);
	run_test(test_ft_file_isdotordotdot);

	test_fixture_end();
}

