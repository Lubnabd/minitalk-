/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 09:38:43 by labdelkh          #+#    #+#             */
/*   Updated: 2024/09/14 16:29:21 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*a;

	if (!s || !f)
	{
		return (NULL);
	}
	a = (char *)malloc(ft_strlen(s) + 1);
	if (!a)
	{
		return (NULL);
	}
	i = 0;
	while (s[i] != '\0')
	{
		a[i] = f(i, s[i]);
		i++;
	}
	a[i] = '\0';
	return (a);
}
/*char    touper(unsigned int i, char s)
{
        if (s >= 97 && s <= 122 && i > 0)
            	s -= 32;
   	return (s);
}
int main (void)
{
		printf("%s\n", ft_strmapi("abc", touper));
}*/
