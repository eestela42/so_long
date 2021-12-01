#include "so_long.h"

int			check_W(t_map *map)
{
	int		i;
	int		k;

	if (!map->E || !map->C || !map->P)
		return(5);
	else if (map->P > 1)
		return(-2);
	map->l = ft_strlen(map->map[0]);
	k = 0;
	while (k < map->w)
	{
		i = 0;
		if (ft_strlen(map->map[k]) != map->l)
			return(7);
		while (map->map[k][i])
		{
			if (((k == 0 || k == map->w) || (i == 0 ||
			i == map->l)) && map->map[k][i] != '1')
			{
				printf("k = %i  w = %i  i = %i  l = %i  char =%c", k, map->w, i, map->l, map->map[k][i]);
				return (6);
			}
			i++;
		}
		k++;
	}
	return(0);
}

int			check_L(t_map *map, int width)
{
	int		k;
	int		i;

	map->C = 0;
	map->E = 0;
	map->P = 0;
	k = 0;
	while (k < width)
	{
		i = 0;
		while (map->map[k][i])
			{
				if (map->map[k][i] == 'C')
					map->C++;
				else if (map->map[k][i] == 'E')
					map->E++;
				else if (map->map[k][i] == 'P')
					map->P++;
				else if (map->map[k][i] == '1' || map->map[k][i] == '0' ||
				map->map[k][i] == '<' || map->map[k][i] == '>' || map->map[k][i] == '^' ||
				map->map[k][i] == 'v')
					;
				else
					return (-1);
				i++;
			}
		k++;
	}
	map->w = width;
	return(check_W(map));
}

int			ft_count(char *str, char c)
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
	return(k);
}

int			cut(t_map *map, char *str)
{
	int		i;
	int		j;
	int		k;

	if (!str)
		return(2);
	map->map = malloc(sizeof(char*) * (ft_count(str, '\n') + 1));
	if (!map)
		return(3);
	i = 0;
	j = 0;
	k = 0;
	while(k < ft_count(str, '\n') + 1)
	{
		if (str[i] == '\n' || str[i] == 0)
		{
			map->map[k] = ft_substr(str, j, i++ - j);
			if (!map->map[k++])
				return(4);
			j = i;
		}
		i++;
	}
	free(str);
	return(check_L(map, k));
}

int			ft_map(t_map *map)
{
	char	*buff;
	char	*mem;
	char	*tmp;
	int		i;
	int		r;
	int		fd;

	buff = malloc(sizeof(char) * 1025);
	if (!(buff))
		return(1);
	mem = ft_strdup("");
	fd = open("./map.ber", O_RDONLY);
	i = 0;
	while ((r = read(fd, buff, 1024)) > 0)
	{
		buff[r] = 0;
		i += r;
		tmp = mem;
		mem = ft_strjoin(mem, buff);
		free(tmp);
		if (!mem)
			break;
	}
	close(fd);
	free(buff);
	return(cut(map, mem));
}
