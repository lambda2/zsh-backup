/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_file_isdotordotdot.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 13:26:50 by ksever            #+#    #+#             */
/*   Updated: 2013/12/01 13:28:51 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_file_isdotordotdot(void)
{
	assert_true(ft_file_isdotordotdot("."));
	assert_true(ft_file_isdotordotdot(".."));
	assert_false(ft_file_isdotordotdot("..hidden"));
	assert_false(ft_file_isdotordotdot(".hidden"));
	assert_false(ft_file_isdotordotdot("folder"));
	assert_false(ft_file_isdotordotdot("folder.."));
	assert_false(ft_file_isdotordotdot("folder.."));
	assert_false(ft_file_isdotordotdot("./.hidden"));
}

