/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstdel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 16:26:01 by ksever            #+#    #+#             */
/*   Updated: 2013/12/01 15:51:12 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static	void	test_ft_del(void *data, size_t size)
{
	if (data != NULL)
		free(data);
	size = 0;
}

void			test_ft_lstdel(void)
{
	t_list	*lstdel_1;
	t_list	*lstdel_2;
	t_list	*lstdel_3;
	t_list	*lstdel_4;
	t_list	*lstdel_5;

	lstdel_1 = ft_lstnew(NULL, 147);
	lstdel_2 = ft_lstnew("This is test", 13);
	lstdel_3 = ft_lstnew("", 0);
	lstdel_4 = ft_lstnew("This_is_testing", 5);
	lstdel_5 = ft_lstnew("", 1);

	assert_true(lstdel_1->content == NULL);
	assert_true(lstdel_1->content_size == 0);
	assert_true(lstdel_1->next == NULL);

	assert_string_equal("This is test", lstdel_2->content);
	assert_true(lstdel_2->content_size == 13);
	assert_true(lstdel_2->next == NULL);

	assert_true(lstdel_3->content == NULL);
	assert_true(lstdel_3->content_size == 0);
	assert_true(lstdel_3->next == NULL);

	assert_string_equal("This_", lstdel_4->content);
	assert_true(lstdel_4->content_size == 5);
	assert_true(lstdel_4->next == NULL);

	assert_string_equal("", lstdel_5->content);
	assert_true(lstdel_5->content_size == 1);
	assert_true(lstdel_5->next == NULL);

	lstdel_1->next = lstdel_2;
	lstdel_2->next = lstdel_3;
	lstdel_3->next = lstdel_4;
	lstdel_4->next = lstdel_5;

	assert_true(lstdel_1->next == lstdel_2);
	assert_true(lstdel_2->next == lstdel_3);
	assert_true(lstdel_3->next == lstdel_4);
	assert_true(lstdel_4->next == lstdel_5);

	ft_lstdel(&lstdel_1, test_ft_del);
/*	assert_true(lstdel_5 == NULL);
	assert_true(lstdel_4 == NULL);
	assert_true(lstdel_3 == NULL);
	assert_true(lstdel_2 == NULL);*/
	assert_true(lstdel_1 == NULL);

}

