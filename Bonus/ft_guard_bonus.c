/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_guard_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestela <eestela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:24:20 by eestela           #+#    #+#             */
/*   Updated: 2021/12/14 17:18:00 by eestela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	guard_up(t_mast *ee, int x, int y)
{
	if (ee->map->map[x - 1][y] == '0')
	{
		ee->map->map[x - 1][y] = 'w';
		ee->map->map[x][y] = '0';
	}
	else if (ee->map->map[x - 1][y] == 'P')
	{
		ee->secu = 666;
		ft_end(ee);
	}
	else
		ee->map->map[x][y] = 's';
}

void	guard_down(t_mast *ee, int x, int y)
{
	if (ee->map->map[x + 1][y] == '0')
	{
		ee->map->map[x + 1][y] = 's';
		ee->map->map[x][y] = '0';
	}
	else if (ee->map->map[x + 1][y] == 'P')
	{
		ee->secu = 666;
		ft_end(ee);
	}
	else
		ee->map->map[x][y] = 'w';
}

void	guard_left(t_mast *ee, int x, int y)
{
	if (ee->map->map[x][y - 1] == '0')
	{
		ee->map->map[x][y - 1] = 'a';
		ee->map->map[x][y] = '0';
	}
	else if (ee->map->map[x][y - 1] == 'P')
	{
		ee->secu = 666;
		ft_end(ee);
	}
	else
		ee->map->map[x][y] = 'd';
}

void	guard_right(t_mast *ee, int x, int y)
{
	if (ee->map->map[x][y + 1] == '0')
	{
		ee->map->map[x][y + 1] = 'd';
		ee->map->map[x][y] = '0';
	}
	else if (ee->map->map[x][y + 1] == 'P')
	{
		ee->secu = 666;
		ft_end(ee);
	}
	else
		ee->map->map[x][y] = 'a';
}

void	ft_guard(t_mast *ee)
{
	int	x;
	int	y;
	int	k;

	x = 0;
	while (x < ee->map->w)
	{
		y = 0;
		while (y < ee->map->l)
		{
			k = ee->map->map[x][y];
			if (k == '^' || k == 'v' || k == '<' || k == '>')
				ee->guard_moove[k](ee, x, y);
			y++;
		}
		x++;
	}
	clear_save(ee);
	x = 0;
}
