/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstadd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 18:18:41 by ksever            #+#    #+#             */
/*   Updated: 2013/12/01 15:51:33 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void			test_ft_lstadd(void)
{
	t_list	*lstadd_1;
	t_list	*lstadd_2;
	t_list	*lstadd_3;
	t_list	*lstadd_4;
	t_list	*lstadd_5;
	t_list	*lstadd_tst;

	lstadd_1 = ft_lstnew(NULL, 147);
	lstadd_2 = ft_lstnew("This is test", 13);
	lstadd_3 = ft_lstnew("", 0);
	lstadd_4 = ft_lstnew("This_is_testing", 5);
	lstadd_5 = ft_lstnew("First element", 14);

	assert_true(lstadd_1->content == NULL);
	assert_true(lstadd_1->content_size == 0);
	assert_true(lstadd_1->next == NULL);

	assert_string_equal("This is test", lstadd_2->content);
	assert_true(lstadd_2->content_size == 13);
	assert_true(lstadd_2->next == NULL);

	assert_true(lstadd_3->content == NULL);
	assert_true(lstadd_3->content_size == 0);
	assert_true(lstadd_3->next == NULL);

	assert_string_equal("This_", lstadd_4->content);
	assert_true(lstadd_4->content_size == 5);
	assert_true(lstadd_4->next == NULL);

	assert_string_equal("First element", lstadd_5->content);
	assert_true(lstadd_5->content_size == 14);
	assert_true(lstadd_5->next == NULL);

	lstadd_1->next = lstadd_2;
	lstadd_2->next = lstadd_3;
	lstadd_3->next = lstadd_4;

	assert_true(lstadd_1->next == lstadd_2);
	assert_true(lstadd_2->next == lstadd_3);
	assert_true(lstadd_3->next == lstadd_4);
	assert_true(lstadd_4->next == NULL);

	lstadd_tst = lstadd_1;
	ft_lstadd(&lstadd_tst, lstadd_5);
	assert_string_equal("First element", lstadd_tst->content);
	assert_true(lstadd_tst == lstadd_5);
	assert_true(lstadd_tst->next == lstadd_1);
	assert_true(lstadd_tst->next->next == lstadd_2);
	assert_true(lstadd_tst->next->next->next == lstadd_3);
	assert_true(lstadd_tst->next->next->next->next == lstadd_4);
	assert_true(lstadd_tst->next->next->next->next->next == NULL);
	assert_true(lstadd_4->next == NULL);

}

