/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestela <eestela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:20:15 by eestela           #+#    #+#             */
/*   Updated: 2021/12/14 17:17:52 by eestela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

char	*r_ground(t_mast *ee)
{
	(void)ee;
	return ("./sp_dj/ground1.xpm");
}

void	find_p(t_mast *ee)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (ee->map->map[i][j] != 'P')
	{
		if (j < ee->map->l)
			j++;
		else
		{
			j = 0;
			i++;
		}
	}
	ee->p_pos[0] = i;
	ee->p_pos[1] = j;
}

int	key_pressed(int key, t_mast *ee)
{
	void	(*key_pr[200])(t_mast *ee);

	if (key < 199)
	{
		find_p(ee);
		init_key(key_pr);
		key_pr[key](ee);
	}
	else if (key == 65307)
		key_esc(ee);
	return (ft_win(*ee));
}

t_mast	ft_display(t_mast ee)
{
	init_disp(ee.disp);
	init_guard(ee.guard_moove);
	ee.r = 0;
	ee.mem = 0;
	ee.mv = 0;
	ee.y = 0;
	ee.x = 0;
	if (ee.map->l > 32 || ee.map->w > 22)
	{
		ee.r = 1;
		where_win(&ee);
	}
	ee.win = mlx_new_window(ee.mlx, win_l(ee.map->l),
			win_w(ee.map->w), "so_long");
	ee.secu = ft_win(ee);
	mlx_hook(ee.win, ClientMessage, NoEventMask, ft_end, &ee);
	mlx_key_hook (ee.win, key_pressed, &ee);
	mlx_loop(ee.mlx);
	return (ee);
}
