/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:38:57 by labdelkh          #+#    #+#             */
/*   Updated: 2024/11/13 14:56:54 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*res;
	char	*s;
	size_t	i;

	res = malloc(nmemb * size);
	if (!res)
	{
		free(res);
		res = NULL;
		return (NULL);
	}
	s = (char *)res;
	i = 0;
	while (i < (nmemb * size))
	{
		s[i] = '\0';
		i++;
	}
	return (res);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (0);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	size;
	size_t	i;
	size_t	j;

	size = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(size + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[size] = '\0';
	return (str);
}

void	ft_copy(char *line, char *buffer, int i)
{
	int		j;

	j = 0;
	while (buffer[i] != '\0')
		line[j++] = buffer[i++];
	free(buffer);
}
