/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:01:05 by labdelkh          #+#    #+#             */
/*   Updated: 2024/10/14 16:22:46 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_hex(unsigned int n, char upper)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (upper == 'X')
	{
		hex = "0123456789ABCDEF";
	}
	else
		hex = "0123456789abcdef";
	if (n >= 16)
	{
		ft_print_hex(n / 16, upper);
		ft_print_hex(n % 16, upper);
	}
	else
		write (1, &hex[n], 1);
}

int	ft_hexlen(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		len++;
		n = n / 16;
	}
	return (len);
}

int	ft_puthex(unsigned int hex, char s)
{
	ft_print_hex(hex, s);
	return (ft_hexlen(hex));
}
