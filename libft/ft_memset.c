/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:04:49 by labdelkh          #+#    #+#             */
/*   Updated: 2024/09/16 12:41:15 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*int main(void)
{
	char buffer[30];
	size_t len = 10;
	size_t i = 0;

	while ( i < sizeof(buffer))
	{
		buffer[i] = 'X';
		i++;
	}
	ft_memset(buffer, 'A', len);
	printf("%s\n", buffer);
}*/
