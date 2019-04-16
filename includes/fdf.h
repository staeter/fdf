/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabbenbr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 12:44:22 by fabbenbr          #+#    #+#             */
/*   Updated: 2019/01/18 12:50:19 by fabbenbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include "../lib/libft/includes/get_next_line.h"
# include "symlink_geolib_includes/geometry.h"
# include "symlink_modelib_includes/modeling.h"
# include "symlink_visualib_includes/visual.h"
# include <math.h>
# include <fcntl.h>

typedef struct			s_input
{
	char				**input;
	int					lines;
	int					linelen;
}						t_input;

/*
** ortho -> mode = 0
** conic -> mode = 1
*/
typedef struct			s_warehouse
{
	t_input			*file;
	vertex			*v;
	edge			*e;
	window 			*w;
	int				mouse_last_pos[2];
	pl				p;
	ve				eye;
	matrix			sysmat;
	bool			mode;
}						warehouse;

/*
** --- File reader and date organization ---
*/
t_input					*file_reader(int fd);
vertex					*veconvertstart(t_input *file);
void					xlink(vertex *grid, t_input *file);
void					ylink(vertex *grid, t_input *file);
edge					*edgefiller(t_input *f, vertex *v);
ve						*createv(int z, int x, int y, ve *ret);
void					errormessage(int i, warehouse *window);
int						get_color_grad(double percent, edge *e);
void					free_all(warehouse *w);

/*
** --- Window ---
*/
void					window_init_load(warehouse *window);
int						windowclose(void *window);
void					refresh_win(warehouse *wl);

/*
** --- Keys and Mouse ---
*/
int						deal_key(int key, warehouse *window);
int						mouse_key(int key,  int x, int y, void *window);
void					key_move(int key, warehouse *window);
void					key_zoom(int key, warehouse *window);
void					change_view(int key, warehouse *window);
int						key_press_all(int key, void *window);
int						mouse_move(int x, int y, void *window);
void					mouse_draw_line(void *window, int x, int y);

#endif
