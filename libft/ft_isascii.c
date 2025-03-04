/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:06:22 by labdelkh          #+#    #+#             */
/*   Updated: 2024/09/16 11:46:09 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*int main(void)
{
	int c1 = 65;
	int c2 = 128;
	printf("%d %d\n", ft_isascii(c1), ft_isascii(c2));

	return (0);
}*/
