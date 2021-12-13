#include "so_long.h"

void	ft_free_img2(t_sprite *sp, void *mlx)
{
	mlx_destroy_image(mlx, sp->one);
	mlx_destroy_image(mlx, sp->two);
	mlx_destroy_image(mlx, sp->three);
	mlx_destroy_image(mlx, sp->four);
	mlx_destroy_image(mlx, sp->five);
	mlx_destroy_image(mlx, sp->six);
	mlx_destroy_image(mlx, sp->seven);
	mlx_destroy_image(mlx, sp->eight);
	mlx_destroy_image(mlx, sp->nine);
	mlx_destroy_image(mlx, sp->guard_up);
	mlx_destroy_image(mlx, sp->guard_left);
	mlx_destroy_image(mlx, sp->guard_down);
	mlx_destroy_image(mlx, sp->guard_right);	
}
void	ft_free_img(t_sprite *sp, void *mlx)
{
	mlx_destroy_image(mlx, sp->Pl );
	mlx_destroy_image(mlx, sp->Pr );
	mlx_destroy_image(mlx, sp->Pu );
	mlx_destroy_image(mlx, sp->Pd );
	mlx_destroy_image(mlx, sp->E );
	mlx_destroy_image(mlx, sp->C );
	mlx_destroy_image(mlx, sp->Wup1 );
	mlx_destroy_image(mlx, sp->Wup2 );
	mlx_destroy_image(mlx, sp->Wleft1 );
	mlx_destroy_image(mlx, sp->Wleft2 );
	mlx_destroy_image(mlx, sp->Wright1 );
	mlx_destroy_image(mlx, sp->Wright2 );
	mlx_destroy_image(mlx, sp->Wdown1 );
	mlx_destroy_image(mlx, sp->Wdown2 );
	mlx_destroy_image(mlx, sp->W1);
	mlx_destroy_image(mlx, sp->G1 );
	mlx_destroy_image(mlx, sp->G2 );
	mlx_destroy_image(mlx, sp->G3 );
	mlx_destroy_image(mlx, sp->zero);
	mlx_destroy_image(mlx, sp->one );
	mlx_destroy_image(mlx, sp->two );
	mlx_destroy_image(mlx, sp->three );
	mlx_destroy_image(mlx, sp->four);
	mlx_destroy_image(mlx, sp->five);
	mlx_destroy_image(mlx, sp->six );
	mlx_destroy_image(mlx, sp->seven );
	mlx_destroy_image(mlx, sp->eight );
	mlx_destroy_image(mlx, sp->nine);
	mlx_destroy_image(mlx, sp->guard_up );
	mlx_destroy_image(mlx, sp->guard_left );
	mlx_destroy_image(mlx, sp->guard_down);
	mlx_destroy_image(mlx, sp->guard_right );
	//ft_free_img2(sp, mlx);
}