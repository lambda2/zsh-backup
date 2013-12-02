/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_fixture_part2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 17:27:20 by ksever            #+#    #+#             */
/*   Updated: 2013/11/24 20:05:41 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_fixture_part2(void)
{
	test_fixture_start();
	run_test(test_ft_memalloc);
	run_test(test_ft_memdel);
	run_test(test_ft_strnew);
	run_test(test_ft_strdel);
	run_test(test_ft_strclr);
	run_test(test_ft_striter);
	run_test(test_ft_striteri);
	run_test(test_ft_strmap);
	run_test(test_ft_strmapi);
	run_test(test_ft_strequ);
	run_test(test_ft_strnequ);
	run_test(test_ft_strsub);
	run_test(test_ft_strjoin);
	run_test(test_ft_strtrim);
	run_test(test_ft_strsplit);
	run_test(test_ft_itoa);
	run_test(test_ft_put);
	run_test(test_ft_put_fd);
	test_fixture_end();
}

