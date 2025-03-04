/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:47:18 by labdelkh          #+#    #+#             */
/*   Updated: 2025/01/28 14:53:09 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	last_char(int pid)
{
	int	i;

	i = 0;
	while (i++ < 8)
	{
		if (kill(pid, SIGUSR1) == -1)
			exit(1);
		usleep(400);
	}
}

void	send_message(int pid, char *msg)
{
	int	letter;
	int	i;

	letter = 0;
	while (msg[letter])
	{
		i = -1;
		while (++i < 8)
		{
			if (((unsigned char)(msg[letter] >> (7 - i)) & 1) == 0)
			{
				if (kill(pid, SIGUSR1) == -1)
					exit (1);
			}
			else if (((unsigned char)(msg[letter] >> (7 - i)) & 1) == 1)
			{
				if (kill(pid, SIGUSR2) == -1)
					exit (1);
			}
			usleep (400);
		}
		letter++;
	}
	last_char(pid);
}

void	check_pid(char *num)
{
	int	i;

	i = 0;
	while (num[i])
	{
		if (num[i] < '0' || num[i] > '9')
		{
			ft_printf("Error, PID contains non numeric characters\n");
			exit(1);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	char		*message;
	int			server_id;

	if (argc == 3)
	{
		check_pid(argv[1]);
		server_id = ft_atoi(argv[1]);
		if (!server_id)
		{
			ft_printf("Error, unvalid PID...\n");
			return (1);
		}
		message = argv[2];
		if (message[0] == 0)
		{
			ft_printf("Error, no recieved message...\n");
			return (2);
		}
		send_message(server_id, message);
	}
	else
	{
		ft_printf("Error, too much OR too few arguments...\n");
		ft_printf("expected: ./client <PID> <MESSAGE>\n");
	}
}
