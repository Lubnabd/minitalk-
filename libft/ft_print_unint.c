/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:53:00 by labdelkh          #+#    #+#             */
/*   Updated: 2024/10/19 13:31:53 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_unsigned(unsigned int n)
{
	char	digit;

	if (n >= 10)
		ft_unsigned (n / 10);
	digit = '0' + (n % 10);
	write (1, &digit, 1);
}

int	ft_unlen(unsigned int n)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	ft_print_unint(unsigned int n)
{
	ft_unsigned(n);
	return (ft_unlen(n));
}
