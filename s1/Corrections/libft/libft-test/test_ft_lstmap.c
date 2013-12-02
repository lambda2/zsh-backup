/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstmap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 19:03:45 by ksever            #+#    #+#             */
/*   Updated: 2013/12/01 15:53:28 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_list	*test_ft_map(t_list *elem)
{
	char	*text;

	if (elem)
	{
		if (elem->content)
		{
			text = (char *)elem->content;
			while(*text)
			{
				*text = (*text) + 1;
				text++;
			}
		}
	}
	return (elem);
}

void			test_ft_lstmap(void)
{
	t_list	*lstmap_1;
	t_list	*lstmap_2;
	t_list	*lstmap_3;
	t_list	*lstmap_4;
	t_list	*lstmap_5;
	t_list	*lstmap_test;

	lstmap_1 = ft_lstnew(NULL, 147);
	lstmap_2 = ft_lstnew("This is test", 13);
	lstmap_3 = ft_lstnew("", 0);
	lstmap_4 = ft_lstnew("This_is_testing", 5);
	lstmap_5 = ft_lstnew("First element", 14);

	assert_true(lstmap_1->content == NULL);
	assert_true(lstmap_1->content_size == 0);
	assert_true(lstmap_1->next == NULL);

	assert_string_equal("This is test", lstmap_2->content);
	assert_true(lstmap_2->content_size == 13);
	assert_true(lstmap_2->next == NULL);

	assert_true(lstmap_3->content == NULL);
	assert_true(lstmap_3->content_size == 0);
	assert_true(lstmap_3->next == NULL);

	assert_string_equal("This_", lstmap_4->content);
	assert_true(lstmap_4->content_size == 5);
	assert_true(lstmap_4->next == NULL);

	assert_string_equal("First element", lstmap_5->content);
	assert_true(lstmap_5->content_size == 14);
	assert_true(lstmap_5->next == NULL);

	lstmap_1->next = lstmap_2;
	lstmap_2->next = lstmap_3;
	lstmap_3->next = lstmap_4;
	lstmap_4->next = lstmap_5;

	assert_true(lstmap_1->next == lstmap_2);
	assert_true(lstmap_2->next == lstmap_3);
	assert_true(lstmap_3->next == lstmap_4);
	assert_true(lstmap_4->next == lstmap_5);

	lstmap_test = ft_lstmap(lstmap_1, test_ft_map);

	assert_true(lstmap_test->next != NULL);
	assert_true(lstmap_test->next->next != NULL);
	assert_true(lstmap_test->next->next->next != NULL);
	assert_true(lstmap_test->next->next->next->next != NULL);
	assert_true(lstmap_test->next->next->next->next->next == NULL);

	assert_true(lstmap_test->content_size == 0);

	assert_string_equal("Uijt!jt!uftu", lstmap_test->next->content);
	assert_true(lstmap_test->next->content_size == 13);

	assert_true(lstmap_test->next->next->content == NULL);
	assert_true(lstmap_test->next->next->content_size == 0);

	assert_string_equal("Uijt`", lstmap_test->next->next->next->content);
	assert_true(lstmap_test->next->next->next->content_size == 5);

	assert_string_equal("Gjstu!fmfnfou", lstmap_test->next->next->next->next->content);
	assert_true(lstmap_test->next->next->next->next->content_size == 14);

	assert_true(lstmap_test->next != lstmap_2);
	assert_true(lstmap_test->next->next != lstmap_3);
	assert_true(lstmap_test->next->next->next != lstmap_4);
	assert_true(lstmap_test->next->next->next->next != lstmap_5);
}

