/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdf_load_data.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 22:21:01 by aaubin            #+#    #+#             */
/*   Updated: 2013/12/18 22:21:06 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void		ft_print_2d_grid(t_context *ct)
{
	int		i;
	int		xi;
	int		yi;
	t_2d_p	pt;
	t_2d_p	pt2;

	i = 0;
	xi = 0;
	yi = 0;
	while (i < ct->mesh->w * ct->mesh->h - 1)
	{
		xi = i % ct->mesh->w;
		yi = i / ct->mesh->w;
		pt = ft_2d_from_3d (ct->scene[i]);
		pt2 = ft_2d_from_3d (ct->scene[i + 1]);
		if (i == 0 || (i + 1) % (ct->mesh->w) != 0)
			ft_draw_line (pt, pt2, ct, LINE_COLOR);
		if (yi < ct->mesh->h - 1)
		{
			pt2 = ft_2d_from_3d (ct->scene[i + ct->mesh->w]);
			ft_draw_line (pt, pt2, ct, LINE_COLOR);
		}
		i++;
	}
}

void		ft_print_3d_grid(t_context *ct)
{
	int		i;
	int		xi;
	int		yi;
	t_3d_p	pt;
	t_3d_p	pt2;

	i = 0;
	xi = 0;
	yi = 0;
	while (i < ct->mesh->w * ct->mesh->h - 1)
	{
		xi = i % ct->mesh->w;
		yi = i / ct->mesh->w;
		pt = ft_apply_matrix (ct->vp.matrix, ct->scene[i]);
		pt2 = ft_apply_matrix (ct->vp.matrix, ct->scene[i + 1]);
		if (i == 0 || (i + 1) % (ct->mesh->w) != 0)
			ft_draw_3d_line (pt, pt2, ct, LINE_COLOR);
		if (yi < ct->mesh->h - 1)
		{
			pt2 = ft_apply_matrix (ct->vp.matrix, ct->scene[i + ct->mesh->w]);
			ft_draw_3d_line (pt, pt2, ct, LINE_COLOR);
		}
		i++;
	}
}

void		ft_apply_transformations(t_context *ct)
{
	t_mat4	translation;
	t_mat4	scale;

	translation = ft_matrix_translate (-ct->mesh->w / 2 , -ct->mesh->h / 2, 0);
	scale = ft_matrix_scale (INTERVAL * 2, INTERVAL * 2, 2);
	ft_print_matrix(translation);
	ct->vp.matrix = ft_multiply_matrix (scale, translation);
	ct->vp.matrix = ft_multiply_matrix (ft_matrix_rotate_x (ct->vp.rot_x), ct->vp.matrix);
	ct->vp.matrix = ft_multiply_matrix (ft_matrix_rotate_y (ct->vp.rot_y), ct->vp.matrix);
	ct->vp.matrix = ft_multiply_matrix (ft_matrix_rotate_z (ct->vp.rot_z), ct->vp.matrix);
	translation = ft_matrix_translate (WIN_W / 2, WIN_H / 2, 0);
	ct->vp.matrix = ft_multiply_matrix (translation, ct->vp.matrix);
	ft_print_matrix (ct->vp.matrix);
}

void		ft_keyboard_event(int k, t_context *ct)
{
	if (k)
	{
		if (k == 65361)
		{
			ct->vp.rot_y -= 0.1;
		}
		else if (k == 65363)
		{
			ct->vp.rot_y += 0.1;
		}
		else
		{
			ct->vp.rot_angle += 1.0;
		}
		ft_print_data(ct);
	}
}

void		ft_print_data(t_context *ct)
{
	int			i;
	float		j;
	t_3d_p	p;


	i = 0;
	j = 0;
	while (j < 2 * PI)
	{
		mlx_clear_window (ct->mlx, ct->win);
		ct->vp.rot_x += j;
		ft_apply_transformations (ct);
		while (i < (ct->mesh->w * ct->mesh->h))
		{
			p = ct->scene[i];
			p = ft_apply_matrix (ct->vp.matrix, p);
			ft_3d_print (p, LINE_COLOR, ct);
			i++;
		}
		ft_print_3d_grid (ct);
		j += (PI / 2);
		usleep(1000000);
	}
}
