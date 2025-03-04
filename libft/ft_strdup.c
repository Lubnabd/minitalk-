/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:19:19 by labdelkh          #+#    #+#             */
/*   Updated: 2024/09/14 16:19:33 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*dup;

	i = 0;
	while (s[i] != '\0')
		i++;
	dup = (char *)malloc(i + 1);
	if (dup == NULL)
		return (NULL);
	j = 0;
	while (s[j] != '\0')
	{
		dup[j] = s[j];
		j++;
	}
	dup[j] = '\0';
	return (dup);
}
/*int main (void)
{
	char *dup = ft_strdup("hello 42");

	printf("%s\n", dup);
}*/
