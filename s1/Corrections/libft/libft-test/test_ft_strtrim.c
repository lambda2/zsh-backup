/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 23:03:00 by ksever            #+#    #+#             */
/*   Updated: 2013/11/25 19:31:55 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_strtrim(void)
{
	assert_string_equal("Trimmed like a pro", ft_strtrim(" \n \t Trimmed like a pro"));
	assert_string_equal("Trimmed with a pro", ft_strtrim("Trimmed with a pro \t \n "));
	assert_string_equal("Trimmed a pro", ft_strtrim("\n \t\t Trimmed a pro \t \n\n "));
	assert_string_equal("Trimmed like a noob", ft_strtrim("Trimmed like a noob"));
	assert_string_equal("Complex\ntrim\tlike this", ft_strtrim(" \n \t \n \tComplex\ntrim\tlike this \n \t"));
	assert_string_equal("Trim\twith\ngotchas", ft_strtrim("Trim\twith\ngotchas"));
	assert_string_equal("", ft_strtrim(" \n \t \n \t \n   \t"));
	assert_true(ft_strtrim(NULL) == NULL);
}

