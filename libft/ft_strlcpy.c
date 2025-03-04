/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 09:53:25 by labdelkh          #+#    #+#             */
/*   Updated: 2024/09/16 15:31:35 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	if (dstsize > 0)
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{	
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}
/*int main(void)
{
	char src[] = "hello world";
	char dst[20];
	size_t len;

	len = ft_strlcpy(dst, src, sizeof(dst));
	printf("%s %s %zu\n", src, dst, len);
}*/
