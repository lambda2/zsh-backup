/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 22:21:01 by aaubin            #+#    #+#             */
/*   Updated: 2013/12/18 22:21:06 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FDF_H
# define FT_FDF_H

# include <mlx.h>
# include <unistd.h>
# include <math.h>
# include <stdio.h> /* !!! */
# include "get_next_line.h"

# define		LINE_COLOR	0xffffff
# define		WIN_H		1200
# define		WIN_W		1900
# define		INTERVAL		40
# define		PI			3.14159265359

typedef struct		s_line
{
	int				dx;
	int				dy;
	int				sx;
	int				sy;
	int				err;
	int				e2;
	int				done;
}					t_line;

typedef struct		s_mesh
{
	int				w;
	int				h;
	int				**data;
}					t_mesh;

typedef struct		s_2d_p
{
	int				x;
	int				y;
}					t_2d_p;

typedef struct		s_3d_p
{
	int				x;
	int				y;
	int				z;
	int				zz;
}					t_3d_p;

typedef struct		s_mat4
{
	float			v[4][4];
}					t_mat4;

typedef struct		s_viewport
{
	double			rot_angle;
	float			rot_x;
	float			rot_y;
	float			rot_z;
	t_mat4			matrix;
}					t_viewport;

typedef struct		s_context
{
	void				*mlx;
	void				*win;
	char				*filename;
	int				width;
	int				height;
	t_3d_p			*scene;
	t_mesh			*mesh;
	t_viewport		vp;
}					t_context;

void		ft_fdf_init(t_context *ct, char *file);
int		ft_fdf_key_hook(int keycode, t_context *ct);
int		ft_fdf_exit(t_context *ct);
int		ft_fdf_expose_hook(t_context *ct);
void		ft_keyboard_event(int k, t_context *ct);

int		ft_count_rows(char *name);
int		ft_count_columns(char **elts);
t_mesh	*ft_parse_array(char *file);
int		*ft_convert_char_int(char **elts, int count);
t_mesh	*ft_add_readed_line(t_mesh *ret, char *buf, int index);

void		ft_print_data(t_context *ct);

t_3d_p	ft_create_3d_point(int x, int y, int z);
t_3d_p	ft_create_3d_point_from_2d(t_2d_p pdx, int z);
void		ft_3d_print(t_3d_p p, unsigned int color, t_context *ct);

t_3d_p	*ft_convert_int_array(t_mesh *array);
void		ft_clear_array(t_3d_p **ret, int size);

t_2d_p	*ft_create_2d_point(int x, int y);
void		ft_2d_print(t_2d_p p, unsigned int color, t_context *ct);
t_2d_p	ft_2d_from_3d(t_3d_p p);

char		**ft_fdf_strsplit(char const *s, char c);
int		ft_abs(int a);
t_line	ft_get_line_ctx(t_2d_p p0, t_2d_p p1);
void		ft_draw_line(t_2d_p p0, t_2d_p p1, t_context *ct, int color);
void		ft_draw_3d_line(t_3d_p p0, t_3d_p p1, t_context *ct, int color);
t_line	ft_get_3d_line_ctx(t_3d_p p0, t_3d_p p1);

t_mat4	ft_create_4d_matrix(void);
t_mat4	ft_multiply_matrix(t_mat4 ma, t_mat4 mb);
t_mat4	ft_add_matrix(t_mat4 ma, t_mat4 mb);
void		ft_copy_matrix(t_mat4 *dest, t_mat4 src);
void		ft_print_matrix(t_mat4 mat);
t_3d_p	ft_apply_matrix(t_mat4 m, t_3d_p p);
void		ft_apply_matrix_on_ctx(t_mat4 m, t_context *ct);

t_mat4	ft_matrix_translate(float x, float y, float z);
t_mat4	ft_matrix_scale(float x, float y, float z);
t_mat4	ft_matrix_rotate_x(double angle);
t_mat4	ft_matrix_rotate_y(double angle);
t_mat4	ft_matrix_rotate_z(double angle);

#endif /* !FT_FDF_H */
