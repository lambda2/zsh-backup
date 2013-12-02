/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstiter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 18:34:35 by ksever            #+#    #+#             */
/*   Updated: 2013/12/01 15:52:52 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_iter(t_list *elem)
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
}

void			test_ft_lstiter(void)
{
	t_list	*lstiter_1;
	t_list	*lstiter_2;
	t_list	*lstiter_3;
	t_list	*lstiter_4;
	t_list	*lstiter_5;

	lstiter_1 = ft_lstnew(NULL, 147);
	lstiter_2 = ft_lstnew("This is test", 13);
	lstiter_3 = ft_lstnew("", 0);
	lstiter_4 = ft_lstnew("This_is_testing", 5);
	lstiter_5 = ft_lstnew("First element", 14);

	assert_true(lstiter_1->content == NULL);
	assert_true(lstiter_1->content_size == 0);
	assert_true(lstiter_1->next == NULL);

	assert_string_equal("This is test", lstiter_2->content);
	assert_true(lstiter_2->content_size == 13);
	assert_true(lstiter_2->next == NULL);

	assert_true(lstiter_3->content == NULL);
	assert_true(lstiter_3->content_size == 0);
	assert_true(lstiter_3->next == NULL);

	assert_string_equal("This_", lstiter_4->content);
	assert_true(lstiter_4->content_size == 5);
	assert_true(lstiter_4->next == NULL);

	assert_string_equal("First element", lstiter_5->content);
	assert_true(lstiter_5->content_size == 14);
	assert_true(lstiter_5->next == NULL);

	lstiter_1->next = lstiter_2;
	lstiter_2->next = lstiter_3;
	lstiter_3->next = lstiter_4;
	lstiter_4->next = lstiter_5;

	assert_true(lstiter_1->next == lstiter_2);
	assert_true(lstiter_2->next == lstiter_3);
	assert_true(lstiter_3->next == lstiter_4);
	assert_true(lstiter_4->next == lstiter_5);

	ft_lstiter(lstiter_1, test_ft_iter);

	assert_true(lstiter_1->content == NULL);
	assert_true(lstiter_1->content_size == 0);
	assert_true(lstiter_1->next == lstiter_2);

	assert_string_equal("Uijt!jt!uftu", lstiter_2->content);
	assert_true(lstiter_2->content_size == 13);
	assert_true(lstiter_2->next == lstiter_3);

	assert_true(lstiter_3->content == NULL);
	assert_true(lstiter_3->content_size == 0);
	assert_true(lstiter_3->next == lstiter_4);

	assert_string_equal("Uijt`", lstiter_4->content);
	assert_true(lstiter_4->content_size == 5);
	assert_true(lstiter_4->next == lstiter_5);

	assert_string_equal("Gjstu!fmfnfou", lstiter_5->content);
	assert_true(lstiter_5->content_size == 14);
	assert_true(lstiter_5->next == NULL);

}

