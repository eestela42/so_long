/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestela <eestela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:33:19 by eestela           #+#    #+#             */
/*   Updated: 2021/12/14 11:33:44 by eestela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_convert1(t_sprite *sp, void *ptr, int i, int j)
{
	sp->g1 = mlx_xpm_file_to_image (ptr, "./sp_dj/ground1.xpm", &i, &j);
	sp->g2 = mlx_xpm_file_to_image (ptr, "./sp_dj/ground2.xpm", &i, &j);
	sp->g3 = mlx_xpm_file_to_image (ptr, "./sp_dj/ground3.xpm", &i, &j);
	sp->zero = mlx_xpm_file_to_image (ptr, "./sprite/zero.xpm", &i, &j);
	sp->one = mlx_xpm_file_to_image (ptr, "./sprite/one.XPM", &i, &j);
	sp->two = mlx_xpm_file_to_image (ptr, "./sprite/two.XPM", &i, &j);
	sp->three = mlx_xpm_file_to_image (ptr, "./sprite/three.XPM", &i, &j);
	sp->four = mlx_xpm_file_to_image (ptr, "./sprite/four.XPM", &i, &j);
	sp->five = mlx_xpm_file_to_image (ptr, "./sprite/five.XPM", &i, &j);
	sp->six = mlx_xpm_file_to_image (ptr, "./sprite/six.XPM", &i, &j);
	sp->seven = mlx_xpm_file_to_image (ptr, "./sprite/seven.XPM", &i, &j);
	sp->eight = mlx_xpm_file_to_image (ptr, "./sprite/eight.XPM", &i, &j);
	sp->nine = mlx_xpm_file_to_image (ptr, "./sprite/nine.XPM", &i, &j);
	if (!sp->one || !sp->two || !sp->three || !sp->four
		|| !sp->five || !sp->six
		|| !sp->seven || !sp->eight || !sp->nine ||!sp->zero
		|| !sp->pl || !sp->pr || !sp->pu || !sp->pd
		|| !sp->e || !sp->c || !sp->w1 || !sp->wup1 || !sp->wup2
		|| !sp->wright1 || !sp->wright2 || !sp->wleft1
		|| !sp->wleft2 || !sp->wdown1 || !sp->wdown2 || !sp->g1
		|| !sp->g2 || !sp->g3 ||!sp->guard_down || !sp->guard_left
		|| !sp->guard_right || !sp->guard_up || !sp->p)
		return (63);
	return (0);
}

int	ft_convert(t_sprite *sp, void *ptr)
{
	int	i;
	int	j;

	sp->e = mlx_xpm_file_to_image (ptr, "./sp_dj/exit.xpm", &i, &j);
	sp->c = mlx_xpm_file_to_image (ptr, "./sp_dj/collectible.xpm", &i, &j);
	sp->w1 = mlx_xpm_file_to_image (ptr, "./sp_dj/wallin.xpm", &i, &j);
	sp->pl = mlx_xpm_file_to_image (ptr, "./sp_dj/player_left.xpm", &i, &j);
	sp->pr = mlx_xpm_file_to_image (ptr, "./sp_dj/player_right.xpm", &i, &j);
	sp->pu = mlx_xpm_file_to_image (ptr, "./sp_dj/player_up.xpm", &i, &j);
	sp->pd = mlx_xpm_file_to_image (ptr, "./sp_dj/player_left.xpm", &i, &j);
	sp->wup1 = mlx_xpm_file_to_image (ptr, "./sp_dj/wallup1.xpm", &i, &j);
	sp->wup2 = mlx_xpm_file_to_image (ptr, "./sp_dj/wallup2.xpm", &i, &j);
	sp->wleft1 = mlx_xpm_file_to_image (ptr, "./sp_dj/wallleft1.xpm", &i, &j);
	sp->wleft2 = mlx_xpm_file_to_image (ptr, "./sp_dj/wallleft2.xpm", &i, &j);
	sp->wright1 = mlx_xpm_file_to_image (ptr, "./sp_dj/wallright1.xpm", &i, &j);
	sp->wright2 = mlx_xpm_file_to_image (ptr, "./sp_dj/wallright2.xpm", &i, &j);
	sp->wdown1 = mlx_xpm_file_to_image (ptr, "./sp_dj/walldown1.xpm", &i, &j);
	sp->wdown2 = mlx_xpm_file_to_image (ptr, "./sp_dj/walldown2.xpm", &i, &j);
	sp->guard_up = mlx_xpm_file_to_image (ptr, "./sp_dj/monsterup.xpm", &i, &j);
	sp->guard_left = mlx_xpm_file_to_image (ptr, "./sp_dj/mleft.xpm", &i, &j);
	sp->guard_down = mlx_xpm_file_to_image (ptr, "./sp_dj/mleft.xpm", &i, &j);
	sp->guard_right = mlx_xpm_file_to_image (ptr, "./sp_dj/mright.xpm", &i, &j);
	sp->p = sp->pl;
	return (ft_convert1(sp, ptr, i, j));
}

int	win_l(int x)
{
	if (x > 32)
		return (32 * 32);
	else
		return (x * 32);
}

int	win_w(int y)
{
	if (y > 22)
		return (22 * 32);
	else
		return (y * 32);
}
