/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestela <eestela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:15:42 by eestela           #+#    #+#             */
/*   Updated: 2021/12/14 16:04:44 by eestela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_end(t_mast *ee)
{
	int		i;
	void	*img;

	i = 0;
	img = ee->sp->pl;
	if (ee->sp)
		ft_free_img(ee->sp, ee->mlx);
	if (ee->win)
		mlx_destroy_window(ee->mlx, ee->win);
	if (ee->sp)
		free(ee->sp);
	if (ee->map->map)
	{
		i = 0;
		while (i < ee->map->w)
			free(ee->map->map[i++]);
		free(ee->map->map);
	}
	i = 0;
	error(ee->secu);
	exit(1);
	return (0);
}

int	main(int ac, char **av)
{
	t_mast	ee;

	if (ac != 2 || ft_strlen(av[1]) < 5
		|| av[1][ft_strlen(av[1]) - 4] != '.'
		|| av[1][ft_strlen(av[1]) - 3] != 'b'
		|| av[1][ft_strlen(av[1]) - 2] != 'e'
		|| av[1][ft_strlen(av[1]) - 1] != 'r')
	{
		printf("NO MAP\n");
		return (-1);
	}
	ee.map = malloc(sizeof(t_map));
	ee.sp = malloc(sizeof(t_sprite));
	if (!ee.map)
		return (0);
	ee.win = NULL;
	ee.mlx = mlx_init();
	ee.secu = ft_convert(ee.sp, ee.mlx);
	ee.secu = ft_map(ee.map, av[1]);
	ft_generate(ee.map, 0, 0, 0);
	if (ee.secu || !ee.mlx)
		ft_end(&ee);
	ee = ft_display(ee);
	ft_end(&ee);
}
