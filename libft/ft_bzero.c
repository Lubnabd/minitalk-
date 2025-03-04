/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:07:00 by labdelkh          #+#    #+#             */
/*   Updated: 2024/09/16 15:18:56 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
/*int main(void)
{
	char buffer[10];
	size_t len = 5;
	size_t i = 0;

	while(i < sizeof(buffer))
	{
		buffer[i] = 'X';
		i++;
	}
	ft_bzero(buffer, len);

	i = 0;
	while ( i < sizeof(buffer))
	{
		printf("%c(%d)", buffer[i], (unsigned char)buffer[i]);
		i++;
	}
	return (0);
}*/
