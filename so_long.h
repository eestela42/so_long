#ifndef SO_LONG_H
# define SO_LONG_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <mlx.h>
# include <X11/X.h>
# include <X11/keysym.h>
//# include <mlx.h>
//# include "minilibx-linux/mlx.h"
//# include "minilibx_opengl_20191021/mlx.h"

typedef struct	s_map
{
	char	**map;
	int		l;
	int		w;
	int		C;
	int		E;
	int		P;
}				t_map;



typedef struct s_sprite
{
	void		*P;
	void		*Pl;
	void		*Pr;
	void		*Pu;
	void		*Pd;
	void		*E;
	void		*C;
	void		*W1;
	void		*Wup1;
	void		*Wup2;
	void		*Wright1;
	void		*Wright2;
	void		*Wleft1;
	void		*Wleft2;
	void		*Wdown1;
	void		*Wdown2;
	void		*G1;
	void		*G2;
	void		*G3;
	void		*zero;
	void		*one;
	void		*two;
	void		*three;
	void		*four;
	void		*five;
	void		*six;
	void		*seven;
	void		*eight;
	void		*nine;
	void		*guard_up;
	void		*guard_right;
	void		*guard_down;
	void		*guard_left;
}				t_sprite;

typedef struct	s_mast
{
	int			secu;
	int			r;
	int			mv;
	int			y;
	int			x;
	int			p_pos[2];
	char		mem;
	void		(*disp[128])(struct s_mast *ee, int x, int y);
	void		(*guard_moove[128])(struct s_mast *ee, int x, int y);
	t_map		*map;
	void		*mlx;
	void		*win;
	t_sprite	*sp;
}				t_mast;

size_t			ft_strlen(const char *s);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(const char *s1);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_substr(char const *s, unsigned int start, size_t len);

int				ft_map(t_map *map);
int				ft_convert(t_sprite *sp, void *ptr);
t_mast			ft_display(t_mast ee);

int				win_l(int x);
int				win_w(int y);

void			put_P(t_mast *ee, int x, int y);
void			put_E(t_mast *ee, int x, int y);
void			put_C(t_mast *ee, int x, int y);
void			put_W1(t_mast *ee, int x, int y);
void			put_G(t_mast *ee, int x, int y);
void			put_zero(t_mast *ee, int x, int y);
void			put_one(t_mast *ee, int x, int y);
void			put_two(t_mast *ee, int x, int y);
void			put_three(t_mast *ee, int x, int y);
void			put_four(t_mast *ee, int x, int y);
void			put_five(t_mast *ee, int x, int y);
void			put_six(t_mast *ee, int x, int y);
void			put_seven(t_mast *ee, int x, int y);
void			put_eight(t_mast *ee, int x, int y);
void			put_nine(t_mast *ee, int x, int y);
void			put_Gup(t_mast *ee, int x, int y);
void			put_Gdown(t_mast *ee, int x, int y);
void			put_Gleft(t_mast *ee, int x, int y);
void			put_Gright(t_mast *ee, int x, int y);

void			mv_none(t_mast *ee);
void			mv_left(t_mast *ee);
void			mv_right(t_mast *ee);
void			mv_up(t_mast *ee);
void			mv_down(t_mast *ee);

void			key_esc(t_mast *ee);

void			ft_guard(t_mast *ee);
void			guard_right(t_mast *ee, int x, int y);
void			guard_left(t_mast *ee, int x, int y);
void			guard_up(t_mast *ee, int x, int y);
void			guard_down(t_mast *ee, int x, int y);

void			init_disp(void (*disp[128])(t_mast *ee, int x, int y));
void			init_key(void	(*key_pr[200])(t_mast *ee));
void			init_guard(void (*guard_moove[128])(t_mast *ee, int x, int y));
void			ft_generate(t_map *map);
void			find_p(t_mast *ee);

void			where_win(t_mast *ee);
void			where_win_light(t_mast *ee);
int				ft_win(t_mast ee);

char			*r_ground(t_mast *ee);

int				ft_end(t_mast *ee);
void			ft_free_img(t_sprite *sp, void *mlx);
void			error(int i);

#endif