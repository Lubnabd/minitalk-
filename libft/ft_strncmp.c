/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:57:44 by labdelkh          #+#    #+#             */
/*   Updated: 2024/08/28 19:43:33 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		t;
	size_t		i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		t = (unsigned char)s1[i] - (unsigned char)s2[i];
		if (t == 0)
			i++;
		else
			return (t);
	}
	return (0);
}
/*int main (void)
{
	printf("%d\n", ft_strncmp("hello" , "world 42", 5));
}*/
