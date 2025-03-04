/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:17:58 by labdelkh          #+#    #+#             */
/*   Updated: 2024/09/14 16:18:36 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*mem;

	total = nmemb * size;
	mem = (void *)malloc(total);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, total);
	return (mem);
}
/*int main (void)
{
	int *arr = (int *)ft_calloc(5, 4);
	arr[0] = 5;
	printf("%i\n", arr[0]);
}*/
