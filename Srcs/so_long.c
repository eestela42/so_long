/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestela <eestela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:15:42 by eestela           #+#    #+#             */
/*   Updated: 2021/12/15 17:45:56 by eestela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_end(t_mast *ee)
{
	int		i;

	i = 0;
	if (ee->sp)
		ft_free_img(ee->sp, ee->mlx);
	if (ee->win)
		mlx_destroy_window(ee->mlx, ee->win);
	if (ee->sp)
		free(ee->sp);
	if (ee->mlx)
		mlx_destroy_display(ee->mlx);
	free(ee->mlx);
	if (ee->map && ee->map->map)
	{
		i = 0;
		while (i < ee->map->w)
			free(ee->map->map[i++]);
		free(ee->map->map);
	}
	if (ee->map)
		free(ee->map);
	i = 0;
	error(ee->secu);
	exit(1);
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
	ee.map->map = NULL;
	ee.sp = malloc(sizeof(t_sprite));
	if (!ee.map || !ee.sp)
		return (0);
	ee.win = NULL;
	ee.mlx = mlx_init();
	ee.secu = ft_convert(ee.sp, ee.mlx);
	if (!ee.secu)
		ee.secu = ft_map(ee.map, av[1]);
	if (ee.secu || !ee.mlx)
		ft_end(&ee);
	ee = ft_display(ee);
	ft_end(&ee);
}
