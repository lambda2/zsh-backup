/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 22:21:01 by aaubin            #+#    #+#             */
/*   Updated: 2013/12/18 22:21:06 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

t_mat4	ft_create_4d_matrix(void)
{
	t_mat4	m = {
		{
			{1.0, 0.0, 0.0, 0.0},
			{0.0, 1.0, 0.0, 0.0},
			{0.0, 0.0, 1.0, 0.0},
			{0.0, 0.0, 0.0, 1.0}
		}
	};
	return (m);
}

t_mat4	ft_multiply_matrix(t_mat4 ma, t_mat4 mb)
{
	t_mat4	r;
	int		i;
	int		j;

	for (i = 0; i < 4; ++i)
		for (j = 0; j < 4; ++j)
			r.v[i][j] = ma.v[i][0] * mb.v[0][j] +
						ma.v[i][1] * mb.v[1][j] +
						ma.v[i][2] * mb.v[2][j] +
						ma.v[i][3] * mb.v[3][j];
	return (r);
}


t_mat4	ft_add_matrix(t_mat4 ma, t_mat4 mb)
{
	t_mat4	mc;
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			mc.v[i][j] = ma.v[i][j] + mb.v[i][j];
			j++;
		}
		i++;
	}
	return (mc);
}

void		ft_copy_matrix(t_mat4 *dest, t_mat4 src)
{
	int	c;
	int	cc;

	c = 0;
	while (c < 4)
	{
		cc = 0;
		while (cc < 4)
		{
			dest->v[c][cc] = src.v[c][cc];
			cc++;
		}
		c++;
	}
}

/* to delete ! */
void		ft_print_matrix(t_mat4 mat)
{
	int	c;
	int	cc;

	c = 0;
	while (c < 4)
	{
		cc = 0;
		while (cc < 4)
		{
			printf(" %5.2f ", mat.v[c][cc]);
			cc++;
		}
		printf("\n");
		c++;
	}
	printf("\n");
}
