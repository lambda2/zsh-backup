/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_striter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 19:48:15 by ksever            #+#    #+#             */
/*   Updated: 2013/11/23 20:04:00 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	test_f_toupper(char *s)
{
	if (*s >= 'a' && *s <= 'z')
		*s = *s - 'a' + 'A';
}

static void	test_f_tolower(char *s)
{
	if (*s >= 'A' && *s <= 'Z')
		*s = *s - 'A' + 'a';
}

void		test_ft_striter(void)
{
	char	striter_1[13] = "This Is Test";

	ft_striter(striter_1, &test_f_toupper);
	assert_string_equal("THIS IS TEST", striter_1);
	ft_striter(striter_1, &test_f_tolower);
	assert_string_equal("this is test", striter_1);
}

