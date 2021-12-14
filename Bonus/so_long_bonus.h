/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestela <eestela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:56:57 by eestela           #+#    #+#             */
/*   Updated: 2021/12/14 17:17:32 by eestela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <mlx.h>
# include <X11/X.h>
# include <X11/keysym.h>

typedef struct s_map
{
	char	**map;
	int		l;
	int		w;
	int		c;
	int		e;
	int		p;
}				t_map;

typedef struct s_sprite
{
	void		*p;
	void		*pl;
	void		*pr;
	void		*pu;
	void		*pd;
	void		*e;
	void		*c;
	void		*w1;
	void		*wup1;
	void		*wup2;
	void		*wright1;
	void		*wright2;
	void		*wleft1;
	void		*wleft2;
	void		*wdown1;
	void		*wdown2;
	void		*g1;
	void		*g2;
	void		*g3;
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

typedef struct s_mast
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

int				ft_map(t_map *map, char *read_map);
char			*ft_reader(int fd, char *buff, char *mem);
int				ft_convert(t_sprite *sp, void *ptr);
t_mast			ft_display(t_mast ee);

int				win_l(int x);
int				win_w(int y);

void			put_p(t_mast *ee, int x, int y);
void			put_e(t_mast *ee, int x, int y);
void			put_c(t_mast *ee, int x, int y);
void			put_w1(t_mast *ee, int x, int y);
void			put_g(t_mast *ee, int x, int y);
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
void			put_gup(t_mast *ee, int x, int y);
void			put_gdown(t_mast *ee, int x, int y);
void			put_gleft(t_mast *ee, int x, int y);
void			put_gright(t_mast *ee, int x, int y);

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
void			clear_save(t_mast *ee);

void			init_disp(void (*disp[128])(t_mast *ee, int x, int y));
void			init_key(void (*key_pr[200])(t_mast *ee));
void			init_guard(void (*guard_moove[128])(t_mast *ee, int x, int y));
void			ft_generate(t_map *map, int c, int x, int i);
void			find_p(t_mast *ee);

void			where_win(t_mast *ee);
void			where_win_light(t_mast *ee);
int				ft_win(t_mast ee);

char			*r_ground(t_mast *ee);

int				ft_end(t_mast *ee);
void			ft_free_img(t_sprite *sp, void *mlx);
void			error(int i);

#endif