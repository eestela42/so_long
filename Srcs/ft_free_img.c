/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_img.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestela <eestela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:56:09 by eestela           #+#    #+#             */
/*   Updated: 2021/12/14 11:39:50 by eestela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_free_img2(t_sprite *sp, void *mlx)
{
	mlx_destroy_image(mlx, sp->one);
	mlx_destroy_image(mlx, sp->two);
	mlx_destroy_image(mlx, sp->three);
	mlx_destroy_image(mlx, sp->four);
	mlx_destroy_image(mlx, sp->five);
	mlx_destroy_image(mlx, sp->six);
	mlx_destroy_image(mlx, sp->seven);
	mlx_destroy_image(mlx, sp->eight);
	mlx_destroy_image(mlx, sp->nine);
	mlx_destroy_image(mlx, sp->guard_up);
	mlx_destroy_image(mlx, sp->guard_left);
	mlx_destroy_image(mlx, sp->guard_down);
	mlx_destroy_image(mlx, sp->guard_right);
	mlx_destroy_image(mlx, sp->zero);
	mlx_destroy_image(mlx, sp->one);
	mlx_destroy_image(mlx, sp->two);
	mlx_destroy_image(mlx, sp->three);
	mlx_destroy_image(mlx, sp->four);
	mlx_destroy_image(mlx, sp->five);
	mlx_destroy_image(mlx, sp->six);
	mlx_destroy_image(mlx, sp->seven);
	mlx_destroy_image(mlx, sp->eight);
	mlx_destroy_image(mlx, sp->nine);
}

void	ft_free_img(t_sprite *sp, void *mlx)
{
	mlx_destroy_image(mlx, sp->pl);
	mlx_destroy_image(mlx, sp->pr);
	mlx_destroy_image(mlx, sp->pu);
	mlx_destroy_image(mlx, sp->pd);
	mlx_destroy_image(mlx, sp->e);
	mlx_destroy_image(mlx, sp->c);
	mlx_destroy_image(mlx, sp->wup1);
	mlx_destroy_image(mlx, sp->wup2);
	mlx_destroy_image(mlx, sp->wleft1);
	mlx_destroy_image(mlx, sp->wleft2);
	mlx_destroy_image(mlx, sp->wright1);
	mlx_destroy_image(mlx, sp->wright2);
	mlx_destroy_image(mlx, sp->wdown1);
	mlx_destroy_image(mlx, sp->wdown2);
	mlx_destroy_image(mlx, sp->w1);
	mlx_destroy_image(mlx, sp->g1);
	mlx_destroy_image(mlx, sp->g2);
	mlx_destroy_image(mlx, sp->g3);
	mlx_destroy_image(mlx, sp->guard_up);
	mlx_destroy_image(mlx, sp->guard_left);
	mlx_destroy_image(mlx, sp->guard_down);
	mlx_destroy_image(mlx, sp->guard_right);
}
