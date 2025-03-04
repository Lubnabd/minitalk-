/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:21:00 by labdelkh          #+#    #+#             */
/*   Updated: 2024/09/14 16:22:30 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	s1len;
	size_t	s2len;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	str = (char *)malloc(s1len + s2len + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, s1len + 1);
	ft_strlcat (str, s2, (s2len + s1len + 1));
	return (str);
}
/*int main (void)
{
		printf("%s\n", ft_strjoin("hello, ", "world"));
}*/
