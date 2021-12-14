/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_sprites1_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestela <eestela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:28:38 by eestela           #+#    #+#             */
/*   Updated: 2021/12/14 17:18:26 by eestela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	put_p(t_mast *ee, int x, int y)
{
	mlx_put_image_to_window(ee->mlx, ee->win, ee->sp->p, x, y);
}

void	put_c(t_mast *ee, int x, int y)
{
	mlx_put_image_to_window(ee->mlx, ee->win, ee->sp->c, x, y);
}

void	put_e(t_mast *ee, int x, int y)
{
	mlx_put_image_to_window(ee->mlx, ee->win, ee->sp->e, x, y);
}

void	put_w1(t_mast *ee, int x, int y)
{
	if ((y / 32 + ee->y) == 0)
		mlx_put_image_to_window(ee->mlx, ee->win, ee->sp->wup1, x, y);
	else if ((y / 32 + ee->y) == ee->map->w - 1)
		mlx_put_image_to_window(ee->mlx, ee->win, ee->sp->wdown1, x, y);
	else if ((x / 32 + ee->x) == 0)
		mlx_put_image_to_window(ee->mlx, ee->win, ee->sp->wleft1, x, y);
	else if ((x / 32 + ee->x) == ee->map->l - 1)
		mlx_put_image_to_window(ee->mlx, ee->win, ee->sp->wright1, x, y);
	else
		mlx_put_image_to_window(ee->mlx, ee->win, ee->sp->w1, x, y);
}

void	put_g(t_mast *ee, int x, int y)
{
	int		i;

	i = (((x / 32 + ee->x) * (y / 32 + ee->y) * ee->map->l * ee->map->w)) % 13;
	if (i == 0 || i == 3 || i == 8 || i == 13)
		mlx_put_image_to_window(ee->mlx, ee->win, ee->sp->g1, x, y);
	else if (i == 1 || i == 6 || i == 10 || i == 12)
		mlx_put_image_to_window(ee->mlx, ee->win, ee->sp->g2, x, y);
	else
		mlx_put_image_to_window(ee->mlx, ee->win, ee->sp->g3, x, y);
}
