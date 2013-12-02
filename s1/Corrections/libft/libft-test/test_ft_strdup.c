/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 13:23:25 by ksever            #+#    #+#             */
/*   Updated: 2013/11/23 18:20:03 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_strdup(void)
{
	char	*strdup_1 = "Test string";
	char	*strdup_1_result;

	strdup_1_result = ft_strdup(strdup_1);
	assert_true(strdup_1_result != NULL);
	assert_true(strdup_1_result != strdup_1);
	assert_string_equal("Test string", strdup_1_result);
	free(strdup_1_result);
}

