/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestela <eestela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:53:35 by eestela           #+#    #+#             */
/*   Updated: 2021/12/14 15:51:35 by eestela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_generate(t_map *map, int c, int x, int i)
{
	int	y;

	while (x++ < map->w)
	{
		y = 0;
		while (y < map->l)
		{
			if (map->map[x][y] == '0')
			{
				i = (x + 1 * y + 1 * map->l * map->w + c) % 59;
				if (i == 64 && map->map[x][y - 1] != 'P')
					map->map[x][y] = '<';
				else if (i == 28 && map->map[x + 1][y] != 'P')
					map->map[x][y] = 'v';
				else if (i == 13 && map->map[x][y + 1] != 'P')
					map->map[x][y] = '>';
				else if (i == 45 && map->map[x - 1][y] != 'P')
					map->map[x][y] = '^';
				c = i;
			}
			y++;
		}
	}
}
