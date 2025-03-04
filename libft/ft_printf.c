/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 10:38:39 by labdelkh          #+#    #+#             */
/*   Updated: 2024/10/14 16:08:50 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar(int c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_printstr(char *s)
{
	int	i;

	if (s == 0)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = 0;
	while (s[i] != '\0')
	{
		write (1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_convert(va_list ap, const char formconv)
{
	int	count;

	count = 0;
	if (formconv == 'c')
		count = count + ft_putchar(va_arg(ap, int));
	else if (formconv == 's')
		count = count + ft_printstr(va_arg(ap, char *));
	else if (formconv == 'p')
		count = count + ft_print_ptr(va_arg(ap, unsigned long long));
	else if (formconv == 'd' || formconv == 'i')
		count = count + ft_printnbr(va_arg(ap, int));
	else if (formconv == 'u')
		count = count + ft_print_unint(va_arg(ap, unsigned int));
	else if (formconv == 'x' || formconv == 'X')
		count = count + ft_puthex(va_arg(ap, unsigned int), formconv);
	else if (formconv == '%')
	{
		write (1, "%", 1);
		count++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	ap;
	int		count;

	i = 0;
	count = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			count = count + ft_convert(ap, format[i + 1]);
			i++;
		}
		else
			count = count + ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (count);
}
