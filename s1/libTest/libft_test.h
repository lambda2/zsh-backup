/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_test.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 02:05:49 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/20 02:33:11 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>

void	ft_dump_mem(void *start, int length);
int		ft_assert_same_memory(const void *s1, const void *s2, size_t n);
void	ft_digest_results(int *r, int re);

void	ft_generate_strings(int size, char *str, char *str_mod);

int		*ft_init_tests(char *name);
void	ft_end_tests(char *name, int *results);
