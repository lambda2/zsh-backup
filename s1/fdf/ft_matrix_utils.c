/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 22:21:01 by aaubin            #+#    #+#             */
/*   Updated: 2013/12/18 22:21:06 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

t_3d_p	ft_apply_matrix(t_mat4 m, t_3d_p p)
{
	t_3d_p	pn;

	pn.zz = 1;
	pn.x = (m.v[0][0] * p.x) + (m.v[0][1] * p.y)
			+ (m.v[0][2] * p.z) + (m.v[0][3] * p.zz);
	pn.y = (m.v[1][0] * p.x) + (m.v[1][1] * p.y)
			+ (m.v[1][2] * p.z) + (m.v[1][3] * p.zz);
	pn.z = (m.v[2][0] * p.x) + (m.v[2][1] * p.y)
			+ (m.v[2][2] * p.z) + (m.v[2][3] * p.zz);
	pn.zz = (m.v[3][0] * p.x) + (m.v[3][1] * p.y)
			+ (m.v[3][2] * p.z) + (m.v[0][3] * p.zz);
	return (pn);
}

void		ft_apply_matrix_on_ctx(t_mat4 m, t_context *ct)
{
	int		i;

	i = 0;
	while (i < (ct->mesh->w * ct->mesh->h))
	{
		ct->scene[i] = ft_apply_matrix (m, ct->scene[i]);
		i++;
	}
}
