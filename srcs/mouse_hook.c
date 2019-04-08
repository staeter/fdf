/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabbenbr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 16:24:03 by fabbenbr          #+#    #+#             */
/*   Updated: 2018/11/17 16:24:05 by fabbenbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

int	windowclose(void *window)
{
	(void)window;
	ft_putstr("exiting");
	exit(0);
	return (0);
}

int	mouse_key(int key, int x, int y, void *window)
{
	static int coord[2][2];

	(void)window;
	(void)x;
	(void)y;
	if (key == BUT1_KEY)
	{
		ft_putstr("Left Button");
		coord[0][0] = coord[1][0];
		coord[0][1] = coord[1][1];
		coord[1][0] = x;
		coord[1][1] = y;
		draw_line_img(((t_wlist*)(window))->w, coord);
		put_img(((t_wlist*)(window))->w);
	}
	else if (key == BUT2_KEY)
		ft_putstr("Right Button");
	else if (key == BUT3_KEY)
		ft_putstr("Middle Button");
	else if (key == SCROLLUP_KEY)
		ft_putstr("Scroll Up");
	else if (key == SCROLLDOWN_KEY)
		ft_putstr("Scroll Down");
	return (0);
}

int	mouse_move(int x, int y, void *window)
{
	(void)window;
	ft_putendl("Mouse_move");
	ft_putnbr(x);
	ft_putendl("");
	ft_putnbr(y);
	ft_putendl("");
	return (0);
}
