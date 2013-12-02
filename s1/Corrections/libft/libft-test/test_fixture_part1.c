/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_fixture_part1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 20:19:59 by ksever            #+#    #+#             */
/*   Updated: 2013/11/23 13:32:08 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_fixture_part1(void)
{
	test_fixture_start();
	run_test(test_ft_memset);
	run_test(test_ft_bzero);
	run_test(test_ft_memcpy);
	run_test(test_ft_memccpy);
	run_test(test_ft_memmove);
	run_test(test_ft_memchr);
	run_test(test_ft_memcmp);
	run_test(test_ft_strlen);
	run_test(test_ft_strdup);
	run_test(test_ft_strcpy);
	run_test(test_ft_strncpy);
	run_test(test_ft_strcat);
	run_test(test_ft_strncat);
	run_test(test_ft_strlcat);
	run_test(test_ft_strchr);
	run_test(test_ft_strrchr);
	run_test(test_ft_strstr);
	run_test(test_ft_strnstr);
	run_test(test_ft_strcmp);
	run_test(test_ft_strncmp);
	run_test(test_ft_atoi);
	run_test(test_ft_isalpha);
	run_test(test_ft_isdigit);
	run_test(test_ft_isalnum);
	run_test(test_ft_isascii);
	run_test(test_ft_isprint);
	run_test(test_ft_toupper);
	run_test(test_ft_tolower);
	test_fixture_end();
}

