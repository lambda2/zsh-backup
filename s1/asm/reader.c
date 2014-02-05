/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambda2 <aaubin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/21 00:16:44 by lambda2           #+#    #+#             */
/*   Updated: 2014/01/21 00:17:08 by lambda2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

int					ft_decode_line(char *s, t_instruction *current)
{
	char			**parts;
	int				ctr;

	ctr = 0;
	while (s[ctr])
	{
		if (s[ctr] == COMMENT_CHAR)
			s[ctr--] = '\0';
		ctr++;
	}
	ctr = 0;
	printf("\n[decoding] %s [\n", s);
	parts = ft_asmsplit(s);
	while (parts && parts[ctr])
	{
		printf("\t - {%s}\n", parts[ctr]);
		ctr++;
	}
	printf("]\n");


}

int					ft_read_source(char *path)
{
	int				fd;
	t_instruction	*root;
	t_instruction	*current;
	char			*s;

	root = create_instruction();
	current = root;
	if ((fd = open(path, O_RDONLY)) == -1)
		return (READ_ERROR);
	while (current && get_next_line(fd, &s))
	{
		ft_decode_line(s, current);
		current->next = create_instruction();
		current = current->next;
	}
	close(fd);
}

void				ft_read_sources(int c, char **v)
{
	int				file_count;

	file_count = 1;
	while (file_count < c)
	{
		ft_read_source(v[file_count]);
		file_count++;
	}
}
