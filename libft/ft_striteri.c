/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 10:46:40 by labdelkh          #+#    #+#             */
/*   Updated: 2024/09/07 11:00:48 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char *))
{
	size_t	i;

	if (!s || !f)
	{
		return ;
	}
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*void    touper(unsigned int i, char *s)
{
        if (*s >= 97 && *s <= 122 && i > 0)
            	*s -= 32;
}

int main(void)
{
    char    s[] = "hellooooo";
    ft_striteri(s, touper);
    printf("%s\n", s);
}*/
