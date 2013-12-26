/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_transforms.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 22:21:01 by aaubin            #+#    #+#             */
/*   Updated: 2013/12/18 22:21:06 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

t_mat4	ft_matrix_translate(float x, float y, float z)
{
	t_mat4	m;

	m = ft_create_4d_matrix ();
	m.v[0][3] = x;
	m.v[1][3] = y;
	m.v[2][3] = z;
	return (m);
}

t_mat4	ft_matrix_scale(float x, float y, float z)
{
	t_mat4	m;

	m = ft_create_4d_matrix ();
	m.v[0][0] = x;
	m.v[1][1] = y;
	m.v[2][2] = z;
	return (m);
}

t_mat4	ft_matrix_rotate_x(double angle)
{
	t_mat4	m;

	m = ft_create_4d_matrix ();
	m.v[1][1] = cos(angle);
	m.v[1][2] = -sin(angle);
	m.v[2][1] = sin(angle);
	m.v[2][2] = cos(angle);
	return (m);
}

t_mat4	ft_matrix_rotate_y(double angle)
{
	t_mat4	m;

	m = ft_create_4d_matrix ();
	m.v[0][0] = cos(angle);
	m.v[0][2] = sin(angle);
	m.v[2][0] = -sin(angle);
	m.v[2][2] = cos(angle);
	return (m);
}

t_mat4	ft_matrix_rotate_z(double angle)
{
	t_mat4	m;

	m = ft_create_4d_matrix ();
	m.v[0][0] = cos(angle);
	m.v[0][1] = -sin(angle);
	m.v[1][0] = sin(angle);
	m.v[1][1] = cos(angle);
	return (m);
}
