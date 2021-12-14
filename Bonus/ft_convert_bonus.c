#include "so_long.h"

int		ft_convert1(t_sprite *sp)
{
	if (!sp->one || !sp->two || !sp->three || !sp->four || !sp->five || !sp->six ||
		!sp->seven || !sp->eight || !sp->nine ||!sp->zero || !sp->Pl || !sp->Pr ||
		!sp->Pu || !sp->Pd || !sp->E || !sp->C || !sp->W1 || !sp->Wup1 || !sp->Wup2 ||
		!sp->Wright1 || !sp->Wright2 || !sp->Wleft1 || !sp->Wleft2 || !sp->Wdown1 ||
		!sp->Wdown2 || !sp->G1 || !sp->G2 || !sp->G3 ||!sp->guard_down ||
		!sp->guard_left || !sp->guard_right || !sp->guard_up || !sp->P)
			return(63);;
	return(0);;
}
int		ft_convert(t_sprite *sp, void *ptr)
{
	int	i;
	int	j;

	//sp->P = mlx_xpm_file_to_image (ptr, "./sp_dj/player_left.xpm", &i, &j);
	sp->Pl = mlx_xpm_file_to_image (ptr, "./sp_dj/player_left.xpm", &i, &j);
	sp->Pr = mlx_xpm_file_to_image (ptr, "./sp_dj/player_right.xpm", &i, &j);
	sp->Pu = mlx_xpm_file_to_image (ptr, "./sp_dj/player_up.xpm", &i, &j);
	sp->Pd = mlx_xpm_file_to_image (ptr, "./sp_dj/player_left.xpm", &i, &j);
	sp->E = mlx_xpm_file_to_image (ptr, "./sp_dj/exit.xpm", &i, &j);
	sp->C = mlx_xpm_file_to_image (ptr, "./sp_dj/collectible.xpm", &i, &j);
	sp->Wup1 = mlx_xpm_file_to_image (ptr, "./sp_dj/wallup1.xpm", &i, &j);
	sp->Wup2 = mlx_xpm_file_to_image (ptr, "./sp_dj/wallup2.xpm", &i, &j);
	sp->Wleft1 = mlx_xpm_file_to_image (ptr, "./sp_dj/wallleft1.xpm", &i, &j);
	sp->Wleft2 = mlx_xpm_file_to_image (ptr, "./sp_dj/wallleft2.xpm", &i, &j);
	sp->Wright1 = mlx_xpm_file_to_image (ptr, "./sp_dj/wallright1.xpm", &i, &j);
	sp->Wright2 = mlx_xpm_file_to_image (ptr, "./sp_dj/wallright2.xpm", &i, &j);
	sp->Wdown1 = mlx_xpm_file_to_image (ptr, "./sp_dj/walldown1.xpm", &i, &j);
	sp->Wdown2 = mlx_xpm_file_to_image (ptr, "./sp_dj/walldown2.xpm", &i, &j);
	sp->W1 = mlx_xpm_file_to_image (ptr, "./sp_dj/wallin.xpm", &i, &j);
	sp->G1 = mlx_xpm_file_to_image (ptr, "./sp_dj/ground1.xpm", &i, &j);
	sp->G2 = mlx_xpm_file_to_image (ptr, "./sp_dj/ground2.xpm", &i, &j);
	sp->G3 = mlx_xpm_file_to_image (ptr, "./sp_dj/ground3.xpm", &i, &j);
	sp->zero = mlx_xpm_file_to_image (ptr, "./sprite/zero.xpm", &i, &j);
	sp->one = mlx_xpm_file_to_image (ptr, "./sprite/one.XPM", &i, &j);
	sp->two = mlx_xpm_file_to_image (ptr, "./sprite/two.XPM", &i, &j);
	sp->three = mlx_xpm_file_to_image (ptr, "./sprite/three.XPM", &i, &j);
	sp->four = mlx_xpm_file_to_image (ptr, "./sprite/four.XPM", &i, &j);
	sp->five = mlx_xpm_file_to_image (ptr, "./sprite/five.XPM", &i, &j);
	sp->six = mlx_xpm_file_to_image (ptr, "./sprite/six.XPM", &i, &j);
	sp->seven = mlx_xpm_file_to_image (ptr, "./sprite/seven.XPM", &i, &j);
	sp->eight = mlx_xpm_file_to_image (ptr, "./sprite/eight.XPM", &i, &j);
	sp->nine = mlx_xpm_file_to_image (ptr, "./sprite/nine.XPM", &i, &j);
	sp->guard_up = mlx_xpm_file_to_image (ptr, "./sp_dj/monsterup.xpm", &i, &j);
	sp->guard_left = mlx_xpm_file_to_image (ptr, "./sp_dj/monsterleft.xpm", &i, &j);
	sp->guard_down = mlx_xpm_file_to_image (ptr, "./sp_dj/monsterleft.xpm", &i, &j);
	sp->guard_right = mlx_xpm_file_to_image (ptr, "./sp_dj/monsterright.xpm", &i, &j);
	sp->P = sp->Pl;
	return(ft_convert1(sp));
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