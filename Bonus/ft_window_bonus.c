/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_window_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestela <eestela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:22:53 by eestela           #+#    #+#             */
/*   Updated: 2021/12/15 19:14:52 by eestela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	where_win(t_mast *ee)
{
	find_p(ee);
	if (ee->map->w > 22)
	{
		if (ee->p_pos[0] - 11 < 0)
			ee->y = 0;
		else if (ee->p_pos[0] + 11 > ee->map->w)
			ee->y = ee->map->w - 22;
		else
			ee->y = ee->p_pos[0] - 11;
	}
	if (ee->map->l > 32)
	{
		if (ee->p_pos[1] - 16 < 0)
			ee->x = 0;
		else if (ee->p_pos[1] + 16 > ee->map->l)
			ee->x = ee->map->l - 32;
		else
			ee->x = ee->p_pos[1] - 16;
	}
}

void	put_mooves(t_mast ee, int pos, int i)
{
	while (ee.mv)
	{
		ee.disp[ee.mv % 10](&ee, (2 * pos - ++i) * 16, 0);
		ee.mv = ee.mv / 10;
	}
}

int	ft_win(t_mast ee)
{
	int	y;
	int	x;
	int	i;
	int	pos;

	where_win(&ee);
	y = ee.y - 1;
	pos = 32;
	if (ee.map->l < 32)
		pos = ee.map->l;
	ft_guard(&ee);
	i = 0;
	while (++y < ee.map->w && y < ee.y + 22)
	{
		x = ee.x;
		while (x < ee.map->l && x < ee.x + 32)
		{
			ee.disp[(int)ee.map->map[y][x]](&ee, (x - ee.x) * 32,
					(y - ee.y) * 32);
			x++;
		}
	}
	put_mooves(ee, pos, i);
	return (0);
}
