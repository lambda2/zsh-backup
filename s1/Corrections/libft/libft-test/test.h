/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 20:23:02 by ksever            #+#    #+#             */
/*   Updated: 2013/12/01 13:29:55 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "seatest.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int		rand_range(int a, int b);
char	*ft_fill_rand_str(char *str, size_t length);

void	all_tests(void);

void	test_fixture_part1(void);

void	test_ft_memset(void);
void	test_ft_bzero(void);
void	test_ft_memcpy(void);
void	test_ft_memccpy(void);
void	test_ft_memmove(void);
void	test_ft_memchr(void);
void	test_ft_memcmp(void);
void	test_ft_strlen(void);
void	test_ft_strdup(void);
void	test_ft_strcpy(void);
void	test_ft_strncpy(void);
void	test_ft_strcat(void);
void	test_ft_strncat(void);
void	test_ft_strlcat(void);
void	test_ft_strchr(void);
void	test_ft_strrchr(void);
void	test_ft_strstr(void);
void	test_ft_strnstr(void);
void	test_ft_strcmp(void);
void	test_ft_strncmp(void);
void	test_ft_atoi(void);
void	test_ft_isalpha(void);
void	test_ft_isdigit(void);
void	test_ft_isalnum(void);
void	test_ft_isascii(void);
void	test_ft_isprint(void);
void	test_ft_toupper(void);
void	test_ft_tolower(void);

void	test_fixture_part2(void);

void	test_ft_memalloc(void);
void	test_ft_memdel(void);
void	test_ft_strnew(void);
void	test_ft_strdel(void);
void	test_ft_strclr(void);
void	test_ft_striter(void);
void	test_ft_striteri(void);
void	test_ft_strmap(void);
void	test_ft_strmapi(void);
void	test_ft_strequ(void);
void	test_ft_strnequ(void);
void	test_ft_strsub(void);
void	test_ft_strjoin(void);
void	test_ft_strtrim(void);
void	test_ft_strsplit(void);
void	test_ft_itoa(void);
void	test_ft_put(void);
void	test_ft_put_fd(void);

void	test_fixture_bonus(void);

void	test_ft_lstnew(void);
void	test_ft_lstdelone(void);
void	test_ft_lstdel(void);
void	test_ft_lstadd(void);
void	test_ft_lstiter(void);
void	test_ft_lstmap(void);

void	test_ft_strdupcat(void);
void	test_ft_file_isdotordotdot(void);

