/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strsub.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 22:39:26 by ksever            #+#    #+#             */
/*   Updated: 2013/11/25 19:45:37 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_strsub(void)
{
	assert_string_equal("substr", ft_strsub("Get substring like a pro", 4, 6));
	assert_string_equal("", ft_strsub("Get substring like a pro", 4, 0));
	assert_string_equal("s", ft_strsub("Get substring like a pro", 7, 1));
}

