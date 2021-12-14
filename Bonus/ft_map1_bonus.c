/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map1_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestela <eestela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:32:21 by eestela           #+#    #+#             */
/*   Updated: 2021/12/14 17:18:07 by eestela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

char	*ft_reader(int fd, char *buff, char *mem)
{
	int		r;
	int		i;
	char	*tmp;

	i = 0;
	r = read(fd, buff, 1024);
	while (r > 0)
	{
		buff[r] = 0;
		i += r;
		tmp = mem;
		mem = ft_strjoin(mem, buff);
		free(tmp);
		if (!mem)
			break ;
		r = read(fd, buff, 1024);
	}
	free(buff);
	return (mem);
}
