/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_tab_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestela <eestela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:02:08 by eestela           #+#    #+#             */
/*   Updated: 2021/12/14 17:18:13 by eestela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	init_disp(void (*disp[128])(t_mast *ee, int x, int y))
{
	int	i;

	i = 0;
	disp['P'] = put_p;
	disp['C'] = put_c;
	disp['E'] = put_e;
	disp['0'] = put_g;
	disp['1'] = put_w1;
	disp['^'] = put_gup;
	disp['v'] = put_gdown;
	disp['<'] = put_gleft;
	disp['>'] = put_gright;
	disp[i++] = put_zero;
	disp[i++] = put_one;
	disp[i++] = put_two;
	disp[i++] = put_three;
	disp[i++] = put_four;
	disp[i++] = put_five;
	disp[i++] = put_six;
	disp[i++] = put_seven;
	disp[i++] = put_eight;
	disp[i++] = put_nine;
}

void	init_key(void (*key_pr[200])(t_mast *ee))
{
	int	i;

	i = 0;
	while (i < 200)
		key_pr[i++] = mv_none;
	key_pr[97] = mv_left;
	key_pr[100] = mv_right;
	key_pr[119] = mv_up;
	key_pr[115] = mv_down;
}

void	init_guard(void (*guard_moove[128])(t_mast *ee, int x, int y))
{
	guard_moove['^'] = guard_up;
	guard_moove['v'] = guard_down;
	guard_moove['>'] = guard_right;
	guard_moove['<'] = guard_left;
}
