/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestela <eestela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:32:21 by eestela           #+#    #+#             */
/*   Updated: 2021/12/15 19:20:28 by eestela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*ft_check_empty(char *mem)
{
	int	i;

	i = 0;
	while (mem[i])
	{
		if (mem[i] == '\n' && (mem[i + 1] == '\n' || mem[i + 1] == 0))
		{
			free(mem);
			return (NULL);
		}
		if (mem[i] != '1' && mem[i] != '0' && mem[i] != 'P'
			&& mem[i] != 'C' && mem[i] != 'E' && mem[i] != '\n')
		{
			free(mem);
			return (NULL);
		}
		i++;
	}
	return (mem);
}

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
		{
			break ;
		}
		r = read(fd, buff, 1024);
	}
	free(buff);
	return (ft_check_empty(mem));
}
