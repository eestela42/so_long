#include "so_long.h"

int	ft_end(t_mast *ee)
{
	int		i;
	void	*img;
	void	*tmp;

	i = 0;
	img = ee->sp->Pl;
	if (ee->sp)
		ft_free_img(ee->sp, ee->mlx);
	if (ee->win)
		mlx_destroy_window(ee->mlx, ee->win);
	if (ee->sp)
		free(ee->sp);
	if (ee->map->map)
	{
		i = 0;
		while(i < ee->map->w)
			free(ee->map->map[i++]);
		free(ee->map->map);
	}
	i = 0;
	error(ee->secu);
	exit(1);
	return(0);
}

int	main()
{
	t_mast	ee;

	ee.map = malloc(sizeof(t_map));
	ee.sp = malloc(sizeof(t_sprite));
	if(!ee.map)
		return(0);
	ee.win = NULL;
	ee.mlx = mlx_init();
	ee.secu = ft_convert(ee.sp, ee.mlx);
	ee.secu = ft_map(ee.map);
	ft_generate(ee.map);
	if (ee.secu || !ee.mlx)
		ft_end(&ee);
	ee = ft_display(ee);
	ft_end(&ee);
}