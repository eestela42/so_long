#include "so_long.h"

int		ft_convert(t_sprite *sp, void *ptr)
{
	int	i;
	int	j;
	int	y;

	i = 0;
	j = 0;
	if (!(sp->P = mlx_xpm_file_to_image (ptr, "./sprite/rick_left.xpm", &i, &j)) ||
		!(sp->Pl = mlx_xpm_file_to_image (ptr, "./sprite/rick_left.xpm", &i, &j)) ||
		!(sp->Pr = mlx_xpm_file_to_image (ptr, "./sprite/rick_right.xpm", &i, &j)) ||
		!(sp->Pu = mlx_xpm_file_to_image (ptr, "./sprite//rick_up.xpm", &i, &j)) ||
		!(sp->Pd = mlx_xpm_file_to_image (ptr, "./sprite/rick_down.xpm", &i, &j)) ||
		!(sp->E = mlx_xpm_file_to_image (ptr, "./sprite/portal.XPM", &i, &j)) ||
		!(sp->C = mlx_xpm_file_to_image (ptr, "./sprite/morty.XPM", &i, &j)) ||
		!(sp->Wup1 = mlx_xpm_file_to_image (ptr, "./sprite/wall.XPM", &i, &j)) ||
		!(sp->Wup2 = mlx_xpm_file_to_image (ptr, "./sprite/wall.XPM", &i, &j)) ||
		!(sp->Wleft1 = mlx_xpm_file_to_image (ptr, "./sprite/wall.XPM", &i, &j)) ||
		!(sp->Wleft2 = mlx_xpm_file_to_image (ptr, "./sprite/wall.XPM", &i, &j)) ||
		!(sp->Wright1 = mlx_xpm_file_to_image (ptr, "./sprite/wall.XPM", &i, &j)) ||
		!(sp->Wright2 = mlx_xpm_file_to_image (ptr, "./sprite/wall.XPM", &i, &j)) ||
		!(sp->Wdown1 = mlx_xpm_file_to_image (ptr, "./sprite/wall.XPM", &i, &j)) ||
		!(sp->Wdown2 = mlx_xpm_file_to_image (ptr, "./sprite/wall.XPM", &i, &j)) ||
		!(sp->W1 = mlx_xpm_file_to_image (ptr, "./sprite/wall.XPM", &i, &j)) ||
		!(sp->G1 = mlx_xpm_file_to_image (ptr, "./sprite/ground1.XPM", &i, &j)) ||
		!(sp->G2 = mlx_xpm_file_to_image (ptr, "./sprite/ground2.XPM", &i, &j)) ||
		!(sp->G3 = mlx_xpm_file_to_image (ptr, "./sprite/ground3.XPM", &i, &j)) ||
		!(sp->zero = mlx_xpm_file_to_image (ptr, "./sprite/zero.xpm", &i, &j)) ||
		!(sp->one = mlx_xpm_file_to_image (ptr, "./sprite/one.XPM", &i, &j)) ||
		!(sp->two = mlx_xpm_file_to_image (ptr, "./sprite/two.XPM", &i, &j)) ||
		!(sp->three = mlx_xpm_file_to_image (ptr, "./sprite/three.XPM", &i, &j)) ||
		!(sp->four = mlx_xpm_file_to_image (ptr, "./sprite/four.XPM", &i, &j)) ||
		!(sp->five = mlx_xpm_file_to_image (ptr, "./sprite/five.XPM", &i, &j)) ||
		!(sp->six = mlx_xpm_file_to_image (ptr, "./sprite/six.XPM", &i, &j)) ||
		!(sp->seven = mlx_xpm_file_to_image (ptr, "./sprite/seven.XPM", &i, &j)) ||
		!(sp->eight = mlx_xpm_file_to_image (ptr, "./sprite/eight.XPM", &i, &j)) ||
		!(sp->nine = mlx_xpm_file_to_image (ptr, "./sprite/nine.XPM", &i, &j)) ||
		!(sp->guard_up = mlx_xpm_file_to_image (ptr, "./sprite/guard_up.XPM", &i, &j)) ||
		!(sp->guard_left = mlx_xpm_file_to_image (ptr, "./sprite/guard_left.XPM", &i, &j)) ||
		!(sp->guard_down = mlx_xpm_file_to_image (ptr, "./sprite/guard_left.XPM", &i, &j)) ||
		!(sp->guard_right = mlx_xpm_file_to_image (ptr, "./sprite/guard_right.XPM", &i, &j)))
		return(10);
	return(0);
}

int		win_l(int x)
{
	if (x > 32)
		return(32 * 32);
	else
		return(x * 32);
}

int		win_w(int y)
{
	if (y > 22)
		return(22 * 32);
	else
		return(y * 32);
}