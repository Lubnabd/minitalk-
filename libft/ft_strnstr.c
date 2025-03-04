/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:17:13 by labdelkh          #+#    #+#             */
/*   Updated: 2024/09/14 16:17:34 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*b;
	const char	*l;
	size_t		rem;

	if (*little == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (*big != '\0' && len >= 1)
	{
		b = big;
		l = little;
		rem = len;
		while (*b == *l && *l != '\0' && rem > 0)
		{
			b++;
			l++;
			rem--;
		}
		if (*l == '\0')
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
/*int main (void)
{
	printf("%s\n", ft_strnstr("hello world", "world", 13));
}*/	
