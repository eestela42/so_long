/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_num1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestela <eestela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:28:55 by eestela           #+#    #+#             */
/*   Updated: 2021/12/14 10:28:55 by eestela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_zero(t_mast *ee, int x, int y)
{
	mlx_put_image_to_window(ee->mlx, ee->win, ee->sp->zero, x, y);
}

void	put_one(t_mast *ee, int x, int y)
{
	mlx_put_image_to_window(ee->mlx, ee->win, ee->sp->one, x, y);
}

void	put_two(t_mast *ee, int x, int y)
{
	mlx_put_image_to_window(ee->mlx, ee->win, ee->sp->two, x, y);
}

void	put_three(t_mast *ee, int x, int y)
{
	mlx_put_image_to_window(ee->mlx, ee->win, ee->sp->three, x, y);
}

void	put_four(t_mast *ee, int x, int y)
{
	mlx_put_image_to_window(ee->mlx, ee->win, ee->sp->four, x, y);
}
