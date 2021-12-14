/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_num2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestela <eestela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:56:39 by eestela           #+#    #+#             */
/*   Updated: 2021/12/14 10:56:55 by eestela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_five(t_mast *ee, int x, int y)
{
	mlx_put_image_to_window(ee->mlx, ee->win, ee->sp->five, x, y);
}

void	put_six(t_mast *ee, int x, int y)
{
	mlx_put_image_to_window(ee->mlx, ee->win, ee->sp->six, x, y);
}

void	put_seven(t_mast *ee, int x, int y)
{
	mlx_put_image_to_window(ee->mlx, ee->win, ee->sp->seven, x, y);
}

void	put_eight(t_mast *ee, int x, int y)
{
	mlx_put_image_to_window(ee->mlx, ee->win, ee->sp->eight, x, y);
}

void	put_nine(t_mast *ee, int x, int y)
{
	mlx_put_image_to_window(ee->mlx, ee->win, ee->sp->nine, x, y);
}
