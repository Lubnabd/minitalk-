/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:20:12 by labdelkh          #+#    #+#             */
/*   Updated: 2024/09/14 16:20:39 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	srclen;
	size_t	i;

	if (!s)
		return (NULL);
	srclen = ft_strlen(s);
	i = 0;
	if (start == 4294967295)
	{
		str = (char *)malloc(1);
		if (!str)
			return (NULL);
		*str = '\0';
		return (str);
	}
	if (start < srclen)
		i = srclen - start;
	if (i > len)
		i = len;
	str = (char *)malloc(i + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, (s + start), i +1);
	return (str);
}
/*int	main(void)
{
	char *substr;

	substr = ft_substr("Hello 42 Network", 7, 2);
	printf("%s\n", substr);
}*/
