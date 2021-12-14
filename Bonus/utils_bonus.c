/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestela <eestela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:54:21 by eestela           #+#    #+#             */
/*   Updated: 2021/12/14 17:18:36 by eestela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	char	*pointer;

	pointer = (char *)s;
	while (*pointer != '\0')
	{
		if (*pointer == c)
			return (pointer);
		pointer++;
	}
	if (c == '\0')
		return (pointer);
	return (NULL);
}

char	*ft_strdup(const char *s1)
{
	char	*new;
	int		i;
	int		len;

	len = 0;
	while (s1[len])
		len++;
	new = (char *)malloc((len + 1) * sizeof(char));
	if (!new)
		return (NULL);
	i = -1;
	while (s1[++i])
		new[i] = s1[i];
	new[i] = '\0';
	return (new);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	new = malloc((len + 1) * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	while (i < len && s[start])
		new[i++] = s[start++];
	if (start > ft_strlen(s))
		new[0] = 0;
	new[i] = 0;
	return (new);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	int		i;
	char	*new;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j])
		new[i++] = s1[j++];
	j = 0;
	while (s2[j])
		new[i++] = s2[j++];
	new[i] = '\0';
	return (new);
}
