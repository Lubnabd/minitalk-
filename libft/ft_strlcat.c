/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 10:42:40 by labdelkh          #+#    #+#             */
/*   Updated: 2024/09/16 16:47:33 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = 0;
	slen = 0;
	i = 0;
	while (src[slen] != '\0')
		slen++;
	while (dst[dlen] != '\0')
		dlen++;
	if (dstsize <= dlen)
		return (dstsize + slen);
	while (src[i] != '\0' && i < dstsize - dlen - 1)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
/*int main(void)
{
	char src[] = "Network";
	char dest[20] = "Hello 42 ";
	ft_strlcat(dest, src, sizeof(dest));

	printf("%s\n", dest);

}*/
