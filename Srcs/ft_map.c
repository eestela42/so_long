/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestela <eestela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:51:21 by eestela           #+#    #+#             */
/*   Updated: 2021/12/15 19:26:20 by eestela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_w(t_map *map)
{
	int		i;
	int		k;

	if (!map->e || !map->c || !map->p)
		return (5);
	else if (map->p > 1)
		return (-2);
	map->l = ft_strlen(map->map[0]);
	k = 0;
	while (k < map->w)
	{
		i = 0;
		if ((int)ft_strlen(map->map[k]) != map->l)
			return (7);
		while (map->map[k][i])
		{
			if (((k == 0 || k == map->w - 1) || (i == 0
						|| i == map->l -1)) && map->map[k][i] != '1')
				return (6);
			i++;
		}
		k++;
	}
	return (0);
}

int	check_l(t_map *map, int width, int k)
{
	int		i;

	map->c = 0;
	map->e = 0;
	map->p = 0;
	while (k < width)
	{
		i = 0;
		while (map->map[k][i])
		{
			if (map->map[k][i] == 'C')
				map->c++;
			else if (map->map[k][i] == 'E')
				map->e++;
			else if (map->map[k][i] == 'P')
				map->p++;
			else if (map->map[k][i] != '1' && map->map[k][i] != '0')
				return (-1);
			i++;
		}
		k++;
	}
	map->w = width;
	return (check_w(map));
}

int	ft_count(char *str, char c)
{
	int		i;
	int		k;

	i = 0;
	k = 0;
	while (str[i])
	{
		if (str[i++] == c)
			k++;
	}
	return (k);
}

int	cut(t_map *map, char *str)
{
	int		i;
	int		j;
	int		k;

	if (!str)
		return (2);
	map->map = malloc(sizeof(char *) * (ft_count(str, '\n') + 1));
	if (!map->map)
		return (3);
	i = 0;
	j = 0;
	k = 0;
	while (k < ft_count(str, '\n') + 1)
	{
		if (str[i] == '\n' || str[i] == 0)
		{
			map->map[k] = ft_substr(str, j, i++ - j);
			if (!map->map[k++])
				return (4);
			j = i;
		}
		i++;
	}
	free(str);
	return (check_l(map, k, 0));
}

int	ft_map(t_map *map, char *read_map)
{
	char	*buff;
	char	*mem;
	int		fd;

	buff = malloc(sizeof(char) * 1025);
	if (!(buff))
		return (1);
	mem = ft_strdup("");
	fd = open(read_map, O_RDONLY);
	if (fd == -1)
	{
		free(mem);
		free(buff);
		return (-4);
	}
	mem = ft_reader(fd, buff, mem);
	close(fd);
	return (cut(map, mem));
}
