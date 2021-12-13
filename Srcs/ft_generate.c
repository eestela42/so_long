#include "so_long.h"

void	ft_generate(t_map *map)
{
	int	i;
	int	x;
	int	y;
	int	c;

	c = 0;
	x = 0;
	while (x < map->w)
	{
		y = 0;
		while (y < map->l)
		{
			if (map->map[x][y] == '0')
		{
			i = (x + 1 * y + 1 * map->l * map->w + c) % 59;
			if (i == 64 && map->map[x][y - 1] != 'P')
				map->map[x][y] = '<';	
			else if (i == 28 && map->map[x + 1][y] != 'P')
				map->map[x][y] = 'v';
			else if (i == 13 && map->map[x][y + 1] != 'P')
				map->map[x][y] = '>';
			else if (i == 45 && map->map[x - 1][y] != 'P')
				map->map[x][y] = '^';
			c = i;
		}
			y++;
		}
		x++;
	}
}