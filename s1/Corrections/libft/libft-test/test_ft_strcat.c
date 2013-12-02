/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 13:35:55 by ksever            #+#    #+#             */
/*   Updated: 2013/11/23 14:15:02 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_strcat(void)
{
	char	strcat_1[28] = "This needs something ";

	ft_strcat(strcat_1, "more");
	assert_string_equal("This needs something more", strcat_1);
}

