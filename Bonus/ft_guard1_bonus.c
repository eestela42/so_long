/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_guard1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestela <eestela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:26:11 by eestela           #+#    #+#             */
/*   Updated: 2021/12/14 11:14:25 by eestela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	clear_save(t_mast *ee)
{
	int	x;
	int	y;

	x = 0;
	while (x < ee->map->w)
	{
		y = 0;
		while (y < ee->map->l)
		{
			if (ee->map->map[x][y] == 'w')
				ee->map->map[x][y] = '^';
			if (ee->map->map[x][y] == 'a')
				ee->map->map[x][y] = '<';
			if (ee->map->map[x][y] == 'd')
				ee->map->map[x][y] = '>';
			if (ee->map->map[x][y] == 's')
				ee->map->map[x][y] = 'v';
			y++;
		}
		x++;
	}
}
