/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_striteri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 20:11:26 by ksever            #+#    #+#             */
/*   Updated: 2013/11/23 20:24:33 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	test_f_toupper(unsigned int i, char *s)
{
	if (*s >= 'a' && *s <= 'z')
		*s = *s - 'a' + 'A' + i;
}

static void	test_f_tolower(unsigned int i, char *s)
{
	if (*s >= 'A' && *s <= 'Z')
		*s = *s - 'A' + 'a' - i;
}

void		test_ft_striteri(void)
{
	char	striteri_1[13] = "This Is Test";

	ft_striteri(striteri_1, &test_f_toupper);
	assert_string_equal("TIKV IY TN]_", striteri_1);
	ft_striteri(striteri_1, &test_f_tolower);
	assert_string_equal("this ds le]_", striteri_1);
}

