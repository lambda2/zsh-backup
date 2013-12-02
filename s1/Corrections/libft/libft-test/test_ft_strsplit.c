/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strsplit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 23:09:31 by ksever            #+#    #+#             */
/*   Updated: 2013/11/25 19:43:57 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_strsplit(void)
{
	char	**strsplit_1;
	char	**strsplit_2;
	char	**strsplit_3;
	char	**strsplit_4;
	char	**strsplit_5;
	char	**strsplit_6;
	char	**strsplit_7;
	char	**strsplit_8;
	char	**strsplit_9;
	char	**strsplit_10;
	char	**strsplit_11;

	strsplit_1 = ft_strsplit("Test string splitting.", ' ');
	strsplit_2 = ft_strsplit("***Hey**people**you*are*a*nice**bunch**!*", '*');
	strsplit_3 = ft_strsplit("--Welcome--to---newcomers.", '-');
	strsplit_4 = ft_strsplit("Noobs--should--read-SO-they-become--experts---", '-');
	strsplit_5 = ft_strsplit("|||||||||||||||||", '|');
	strsplit_6 = ft_strsplit("", '-');
	strsplit_7 = ft_strsplit("hello", '*');
	strsplit_8 = ft_strsplit("*hello", '*');
	strsplit_9 = ft_strsplit("hello*", '*');
	strsplit_10 = ft_strsplit("hel**lo", '*');
	strsplit_11 = ft_strsplit("d*test*about*stuff*like**this", '*');

	assert_string_equal("Test", strsplit_1[0]);
	assert_string_equal("string", strsplit_1[1]);
	assert_string_equal("splitting.", strsplit_1[2]);
	assert_true(strsplit_1[3] == '\0');

	assert_string_equal("Hey", strsplit_2[0]);
	assert_string_equal("people", strsplit_2[1]);
	assert_string_equal("you", strsplit_2[2]);
	assert_string_equal("are", strsplit_2[3]);
	assert_string_equal("a", strsplit_2[4]);
	assert_string_equal("nice", strsplit_2[5]);
	assert_string_equal("bunch", strsplit_2[6]);
	assert_string_equal("!", strsplit_2[7]);
	assert_true(strsplit_2[8] == '\0');

	assert_string_equal("Welcome", strsplit_3[0]);
	assert_string_equal("to", strsplit_3[1]);
	assert_string_equal("newcomers.",strsplit_3[2]);
	assert_true(strsplit_3[3] == '\0');

	assert_string_equal("Noobs", strsplit_4[0]);
	assert_string_equal("should", strsplit_4[1]);
	assert_string_equal("read", strsplit_4[2]);
	assert_string_equal("SO", strsplit_4[3]);
	assert_string_equal("they", strsplit_4[4]);
	assert_string_equal("become", strsplit_4[5]);
	assert_string_equal("experts", strsplit_4[6]);
	assert_true(strsplit_4[7] == '\0');

	assert_true(strsplit_5[0] == '\0');

	assert_true(strsplit_6[0] == '\0');

	assert_string_equal("hello", strsplit_7[0]);
	assert_true(strsplit_7[1] == '\0');

	assert_string_equal("hello", strsplit_8[0]);
	assert_true(strsplit_8[1] == '\0');

	assert_string_equal("hello", strsplit_9[0]);
	assert_true(strsplit_9[1] == '\0');

	assert_string_equal("hel", strsplit_10[0]);
	assert_string_equal("lo", strsplit_10[1]);
	assert_true(strsplit_10[2] == '\0');

	assert_string_equal("d", strsplit_11[0]);
	assert_string_equal("test", strsplit_11[1]);
	assert_string_equal("about", strsplit_11[2]);
	assert_string_equal("stuff", strsplit_11[3]);
	assert_string_equal("like", strsplit_11[4]);
	assert_string_equal("this", strsplit_11[5]);
	assert_true(strsplit_11[6] == '\0');


}

