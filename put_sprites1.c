#include "so_long.h"

void	put_P(t_mast *ee, int x, int y)
{
	mlx_put_image_to_window(ee->mlx, ee->win, ee->sp->P, x, y);
}

void	put_C(t_mast *ee, int x, int y)
{
	mlx_put_image_to_window(ee->mlx, ee->win, ee->sp->C, x, y);
}

void	put_E(t_mast *ee, int x, int y)
{
	mlx_put_image_to_window(ee->mlx, ee->win, ee->sp->E, x, y);
}

void	put_W1(t_mast *ee, int x, int y)
{
	if ((y / 32 + ee->y) == 0)
		mlx_put_image_to_window(ee->mlx, ee->win, ee->sp->Wup1, x, y);
	else if ((y / 32 + ee->y) == ee->map->w - 1)
		mlx_put_image_to_window(ee->mlx, ee->win, ee->sp->Wdown1, x, y);
	else if ((x / 32 + ee->x) == 0)
		mlx_put_image_to_window(ee->mlx, ee->win, ee->sp->Wleft1, x, y);
	else if ((x / 32 + ee->x) == ee->map->l - 1)
		mlx_put_image_to_window(ee->mlx, ee->win, ee->sp->Wright1, x, y);
	else
		mlx_put_image_to_window(ee->mlx, ee->win, ee->sp->W1, x, y);
}

void	put_G(t_mast *ee, int x, int y)
{
	int		i;

	i = (((x / 32 + ee->x) * (y / 32 + ee->y) * ee->map->l * ee->map->w)) % 13;
	if (i == 0 || i == 3 || i == 8 || i == 13)
		mlx_put_image_to_window(ee->mlx, ee->win, ee->sp->G1, x, y);
	else if (i == 1 || i == 6 || i == 10 || i == 12)
		mlx_put_image_to_window(ee->mlx, ee->win, ee->sp->G2, x, y);
	else
		mlx_put_image_to_window(ee->mlx, ee->win, ee->sp->G3, x, y);
}