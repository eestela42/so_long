/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_mv.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestela <eestela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:43:21 by eestela           #+#    #+#             */
/*   Updated: 2021/12/14 11:09:21 by eestela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	mv_none(t_mast *ee)
{
	(void)ee;
	return ;
}

void	mv_left(t_mast *ee)
{
	if (ee->map->map[ee->p_pos[0]][ee->p_pos[1] - 1] == '1')
		return ;
	if (ee->mem == 'E')
		ee->map->map[ee->p_pos[0]][ee->p_pos[1]] = 'E';
	else
		ee->map->map[ee->p_pos[0]][ee->p_pos[1]] = '0';
	ee->mem = ee->map->map[ee->p_pos[0]][ee->p_pos[1] - 1];
	ee->map->map[ee->p_pos[0]][ee->p_pos[1] - 1] = 'P';
	if (ee->mem == 'C')
		ee->map->c--;
	else if (ee->mem == 'E' && !ee->map->c)
		ft_end(ee);
	ee->mv++;
	if (ee->map->l > 32 && ee->x - 1 >= 0 && ee->p_pos[1] - ee->x < 13)
		ee->x--;
	ee->sp->p = ee->sp->pl;
}

void	mv_right(t_mast *ee)
{
	if (ee->map->map[ee->p_pos[0]][ee->p_pos[1] + 1] == '1')
		return ;
	if (ee->mem == 'E')
		ee->map->map[ee->p_pos[0]][ee->p_pos[1]] = 'E';
	else
		ee->map->map[ee->p_pos[0]][ee->p_pos[1]] = '0';
	ee->mem = ee->map->map[ee->p_pos[0]][ee->p_pos[1] + 1];
	ee->map->map[ee->p_pos[0]][ee->p_pos[1] + 1] = 'P';
	if (ee->mem == 'C')
		ee->map->c--;
	else if (ee->mem == 'E' && !ee->map->c)
		ft_end(ee);
	ee->mv++;
	if (ee->map->l > 32 && ee->x + 23 < ee->map->l && ee->p_pos[1] - ee->x > 19)
		ee->x++;
	ee->sp->p = ee->sp->pr;
}

void	mv_up(t_mast *ee)
{
	if (ee->map->map[ee->p_pos[0] - 1][ee->p_pos[1]] == '1')
		return ;
	if (ee->mem == 'E')
		ee->map->map[ee->p_pos[0]][ee->p_pos[1]] = 'E';
	else
		ee->map->map[ee->p_pos[0]][ee->p_pos[1]] = '0';
	ee->mem = ee->map->map[ee->p_pos[0] - 1][ee->p_pos[1]];
	ee->map->map[ee->p_pos[0] - 1][ee->p_pos[1]] = 'P';
	if (ee->mem == 'C')
		ee->map->c--;
	else if (ee->mem == 'E' && !ee->map->c)
		ft_end(ee);
	ee->mv++;
	if (ee->map->w > 22 && ee->y - 1 >= 0 && ee->p_pos[0] - ee->y < 8)
		ee->y--;
	ee->sp->p = ee->sp->pu;
}

void	mv_down(t_mast *ee)
{
	if (ee->map->map[ee->p_pos[0] + 1][ee->p_pos[1]] == '1')
		return ;
	if (ee->mem == 'E')
		ee->map->map[ee->p_pos[0]][ee->p_pos[1]] = 'E';
	else
		ee->map->map[ee->p_pos[0]][ee->p_pos[1]] = '0';
	ee->mem = ee->map->map[ee->p_pos[0] + 1][ee->p_pos[1]];
	ee->map->map[ee->p_pos[0] + 1][ee->p_pos[1]] = 'P';
	if (ee->mem == 'C')
		ee->map->c--;
	else if (ee->mem == 'E' && !ee->map->c)
		ft_end(ee);
	ee->mv++;
	if (ee->map->w > 22 && ee->y + 22 < ee->map->w && ee->p_pos[0] - ee->y > 14)
		ee->y++;
	ee->sp->p = ee->sp->pd;
}
