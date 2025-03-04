/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 09:32:41 by labdelkh          #+#    #+#             */
/*   Updated: 2024/09/16 17:21:44 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (unsigned char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if ((unsigned char)c == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}
// line 21 char * so it becomes only a char(string) not a const char(string)
// we need to walk through the char that's why we did the casting
// line 23 //( s is the pointer , *s is the value of that charecter pointed at
/*int main(void)
{
    const char *str = "Hello, World!";
    char target = 'W';

    char *result = ft_strchr(str, target);

    if (result)
        printf("%s\n", result);
    else
        printf("%c\n", target);
}*/
