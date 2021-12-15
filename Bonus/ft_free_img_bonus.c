/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_img_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestela <eestela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:56:09 by eestela           #+#    #+#             */
/*   Updated: 2021/12/15 19:21:28 by eestela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_free_img2(t_sprite *sp, void *mlx)
{
	if (sp->one)
		mlx_destroy_image(mlx, sp->one);
	if (sp->two)
		mlx_destroy_image(mlx, sp->two);
	if (sp->three)
		mlx_destroy_image(mlx, sp->three);
	if (sp->four)
		mlx_destroy_image(mlx, sp->four);
	if (sp->five)
		mlx_destroy_image(mlx, sp->five);
	if (sp->six)
		mlx_destroy_image(mlx, sp->six);
	if (sp->seven)
		mlx_destroy_image(mlx, sp->seven);
	if (sp->eight)
		mlx_destroy_image(mlx, sp->eight);
	if (sp->nine)
		mlx_destroy_image(mlx, sp->nine);
	if (sp->zero)
		mlx_destroy_image(mlx, sp->zero);
}

void	ft_free_img1(t_sprite *sp, void *mlx)
{
	if (sp->wright1)
		mlx_destroy_image(mlx, sp->wright1);
	if (sp->wright2)
		mlx_destroy_image(mlx, sp->wright2);
	if (sp->wdown1)
		mlx_destroy_image(mlx, sp->wdown1);
	if (sp->wdown2)
		mlx_destroy_image(mlx, sp->wdown2);
	if (sp->g1)
		mlx_destroy_image(mlx, sp->g1);
	if (sp->g2)
		mlx_destroy_image(mlx, sp->g2);
	if (sp->g3)
		mlx_destroy_image(mlx, sp->g3);
	if (sp->guard_up)
		mlx_destroy_image(mlx, sp->guard_up);
	if (sp->guard_left)
		mlx_destroy_image(mlx, sp->guard_left);
	if (sp->guard_down)
		mlx_destroy_image(mlx, sp->guard_down);
	if (sp->guard_right)
		mlx_destroy_image(mlx, sp->guard_right);
	ft_free_img2(sp, mlx);
}

void	ft_free_img(t_sprite *sp, void *mlx)
{
	if (sp->pl)
		mlx_destroy_image(mlx, sp->pl);
	if (sp->pr)
		mlx_destroy_image(mlx, sp->pr);
	if (sp->pu)
		mlx_destroy_image(mlx, sp->pu);
	if (sp->pd)
		mlx_destroy_image(mlx, sp->pd);
	if (sp->e)
		mlx_destroy_image(mlx, sp->e);
	if (sp->c)
		mlx_destroy_image(mlx, sp->c);
	if (sp->w1)
		mlx_destroy_image(mlx, sp->w1);
	if (sp->wup1)
		mlx_destroy_image(mlx, sp->wup1);
	if (sp->wup2)
		mlx_destroy_image(mlx, sp->wup2);
	if (sp->wleft1)
		mlx_destroy_image(mlx, sp->wleft1);
	if (sp->wleft2)
		mlx_destroy_image(mlx, sp->wleft2);
	ft_free_img1(sp, mlx);
}
