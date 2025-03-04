/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:49:38 by labdelkh          #+#    #+#             */
/*   Updated: 2024/10/14 15:58:05 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ptrlen(unsigned long long num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_putptr(unsigned long long num)
{
	if (num >= 16)
	{
		ft_putptr (num / 16);
	}
	if (num % 16 <= 9)
		ft_putchar_fd(((num % 16) + '0'), 1);
	else
		ft_putchar_fd(((num % 16) - 10 + 'a'), 1);
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	len;

	len = 0;
	if (ptr == 0)
	{
		write (1, "(nil)", 5);
		return (5);
	}
	else
	{
		write (1, "0x", 2);
		len = 2;
		ft_putptr(ptr);
		len = len + ft_ptrlen(ptr);
	}
	return (len);
}
