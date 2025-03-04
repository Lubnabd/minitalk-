/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:22:56 by labdelkh          #+#    #+#             */
/*   Updated: 2024/09/14 16:25:07 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	is_in_set(char c, const char *set)
{
	while (*set != '\0')
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmedstr;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] != '\0' && is_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && is_in_set(s1[end - 1], set))
		end--;
	trimmedstr = (char *)malloc(end - start + 1);
	if (!trimmedstr)
		return (NULL);
	ft_strlcpy (trimmedstr, &s1[start], end - start + 1);
	return (trimmedstr);
}
/*int	main(void)
{
	char *trimmed = ft_strtrim("   Hello, world!   ", " ");
	printf("%s\n", trimmed);
	return 0;
}*/
