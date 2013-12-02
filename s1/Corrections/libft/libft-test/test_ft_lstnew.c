/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstnew.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 19:06:00 by ksever            #+#    #+#             */
/*   Updated: 2013/12/01 15:29:53 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_lstnew(void)
{
	t_list	*lstnew_1;
	t_list	*lstnew_2;
	t_list	*lstnew_3;
	t_list	*lstnew_4;
	t_list	*lstnew_5;

	lstnew_1 = ft_lstnew(NULL, 147);
	lstnew_2 = ft_lstnew("This is test", 13);
	lstnew_3 = ft_lstnew("This_is_testing", 5);
	lstnew_4 = ft_lstnew("", 0);
	lstnew_5 = ft_lstnew("", 1);

	assert_true(lstnew_1->content == NULL);
	assert_true(lstnew_1->content_size == 0);
	assert_true(lstnew_1->next == NULL);

	assert_string_equal("This is test", lstnew_2->content);
	assert_true(lstnew_2->content_size == 13);
	assert_true(lstnew_2->next == NULL);

	assert_string_equal("This_", lstnew_3->content);
	assert_true(lstnew_3->content_size == 5);
	assert_true(lstnew_3->next == NULL);

	assert_true(lstnew_4->content == NULL);
	assert_true(lstnew_4->content_size == 0);
	assert_true(lstnew_4->next == NULL);

	assert_string_equal("", lstnew_5->content);
	assert_true(lstnew_5->content_size == 1);
	assert_true(lstnew_5->next == NULL);


}

