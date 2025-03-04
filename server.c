/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:54:25 by labdelkh          #+#    #+#             */
/*   Updated: 2025/01/28 14:54:41 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

char	*letter_to_string(const char *s1, const char letter)
{
	int			i;
	char		*tab;

	i = 0;
	tab = malloc(ft_strlen(s1) + 2);
	if (!tab)
		return (NULL);
	while (s1[i])
	{
		tab[i] = s1[i];
		i++;
	}
	tab[i] = letter;
	i++;
	tab[i] = '\0';
	free((char *)(s1));
	return (tab);
}

void	signal_handler(int signum)
{
	static int		counter = 0;
	static int		res = 0;
	static char		*final = NULL;
	static int		tab[] = {1, 2, 4, 8, 16, 32, 64, 128};

	if (!final)
		final = ft_strdup("");
	if (signum == SIGUSR1)
		res = res + 0;
	else if (signum == SIGUSR2)
		res = res + tab[7 - counter];
	counter++;
	if (counter == 8)
	{
		final = letter_to_string(final, res);
		if (res == '\0')
		{
			ft_printf("%s\n", final);
			free(final);
			final = NULL;
		}
		counter = 0;
		res = 0;
	}
}

int	main(int argc, char **argv)
{
	struct sigaction	recieved_signal;

	(void) argv;
	if (argc == 1)
	{
		ft_printf("PID: %d\n", getpid());
		recieved_signal.sa_handler = signal_handler;
		recieved_signal.sa_flags = 0;
		sigaction(SIGUSR1, &recieved_signal, NULL);
		sigaction(SIGUSR2, &recieved_signal, NULL);
		while (1)
			pause();
	}
	else
	{
		ft_printf("ERROR: Too many arguments\n");
		exit(1);
	}
}
