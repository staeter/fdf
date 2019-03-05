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
# include "../lib/minilibx_macos/mlx.h"
# include "../lib/geolib/geometry.h"
# include "../lib/modeling/modeling.h"
# include <math.h>
# include <fcntl.h>
# include <stdio.h>

# define WHEIGHT 1280
# define WWIDTH 2280
# define COLORWHITE 0xaabbcc
typedef struct			sinput
{
	int **input;
	int lines;
	int linelen;
}										tinput;

typedef struct			swlist
{
	void	*mlx_ptr;
	void	*win_ptr;
}						twlist;

int deal_key(int key, twlist *window);
int mouse_key(int key, twlist *window);
void window_init(twlist *window);
tinput	*file_reader(int fd);
tinput *character_convertor(tinput *lst, char *temp);
int **filecreator(char *temp, int lines, int linelen);
int linecounter(char *str);
//twlist *free_list(twlist *window);
int windowclose(twlist *window);
int mouse_move(int x, int y, twlist *window);
int		**filefiller(int **input, char *temp, int linelen);
int		validinput(char *temp);
vertex *veconvert(int **input, int lines, int linelen);

#endif
