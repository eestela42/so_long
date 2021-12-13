#include "so_long.h"

void	put_Gup(t_mast *ee, int x, int y)
{
	mlx_put_image_to_window(ee->mlx, ee->win, ee->sp->guard_up, x, y);
}

void	put_Gdown(t_mast *ee, int x, int y)
{
	mlx_put_image_to_window(ee->mlx, ee->win, ee->sp->guard_down, x, y);
}

void	put_Gleft(t_mast *ee, int x, int y)
{
	mlx_put_image_to_window(ee->mlx, ee->win, ee->sp->guard_left, x, y);
}

void	put_Gright(t_mast *ee, int x, int y)
{
	mlx_put_image_to_window(ee->mlx, ee->win, ee->sp->guard_right, x, y);
}