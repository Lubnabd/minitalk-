/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:12:16 by labdelkh          #+#    #+#             */
/*   Updated: 2024/09/16 15:14:08 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	size_t			j;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	j = 1;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		j = -1;
		d += n - 1;
		s += n - 1;
	}
	while (i < n)
	{
		*d = *s;
		d += j;
		s += j;
		i++;
	}
	return (dest);
}
/*int main(void)
{
	char buffer[20] = "Hello, World!";
	ft_memmove(buffer + 7, buffer, 5);
	printf("%s\n", buffer);

		return (0);
}*/
// line 38 j is -1 so we are walking in the opposite direction 
