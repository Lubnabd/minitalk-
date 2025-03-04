/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:55:27 by labdelkh          #+#    #+#             */
/*   Updated: 2024/09/16 11:28:38 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*int main(void)
	
{
	char c1 = '5';
	char c2 = 'a';
	printf("%d %d\n", ft_isdigit(c1), ft_isdigit(c2));
	
	return (0);
}*/
