/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstdelone.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 12:41:54 by ksever            #+#    #+#             */
/*   Updated: 2013/12/01 15:50:54 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static	void	test_ft_del(void *data, size_t size)
{
	if (data != NULL)
		free(data);
	size = 0;
}

void			test_ft_lstdelone(void)
{
	t_list	*lstdelone_1;
	t_list	*lstdelone_2;
	t_list	*lstdelone_3;
	t_list	*lstdelone_4;
	t_list	*lstdelone_5;

	lstdelone_1 = ft_lstnew(NULL, 147);
	lstdelone_2 = ft_lstnew("This is test", 13);
	lstdelone_3 = ft_lstnew("", 0);
	lstdelone_4 = ft_lstnew("This_is_testing", 5);
	lstdelone_5 = ft_lstnew("", 1);

	assert_true(lstdelone_1->content == NULL);
	assert_true(lstdelone_1->content_size == 0);
	assert_true(lstdelone_1->next == NULL);

	assert_string_equal("This is test", lstdelone_2->content);
	assert_true(lstdelone_2->content_size == 13);
	assert_true(lstdelone_2->next == NULL);

	assert_true(lstdelone_3->content == NULL);
	assert_true(lstdelone_3->content_size == 0);
	assert_true(lstdelone_3->next == NULL);

	assert_string_equal("This_", lstdelone_4->content);
	assert_true(lstdelone_4->content_size == 5);
	assert_true(lstdelone_4->next == NULL);

	assert_string_equal("", lstdelone_5->content);
	assert_true(lstdelone_5->content_size == 1);
	assert_true(lstdelone_5->next == NULL);

	lstdelone_1->next = lstdelone_2;
	lstdelone_2->next = lstdelone_3;
	lstdelone_3->next = lstdelone_4;
	lstdelone_4->next = lstdelone_5;

	ft_lstdelone(&lstdelone_1->next->next->next->next, test_ft_del);
	assert_true(lstdelone_1->next->next->next->next == NULL);
	ft_lstdelone(&lstdelone_3, test_ft_del);
	assert_true(lstdelone_3 == NULL);
	assert_true(lstdelone_1->next->next != NULL);
	assert_true(lstdelone_4 != NULL);
	ft_lstdelone(&lstdelone_4, test_ft_del);
	assert_true(lstdelone_4 == NULL);
	ft_lstdelone(&lstdelone_1->next, test_ft_del);
	assert_true(lstdelone_1->next == NULL);
	ft_lstdelone(&lstdelone_1, test_ft_del);
	assert_true(lstdelone_1 == NULL);
}

