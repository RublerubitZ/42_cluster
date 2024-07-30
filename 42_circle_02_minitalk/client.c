/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seku <seku@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 21:24:10 by seku              #+#    #+#             */
/*   Updated: 2024/07/30 23:36:27 by seku             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_msg(int server_pid, char msg)
{
	int	bit;

	bit = 7;
	while (bit >= 0)
	{
		if (msg >> bit & 1)
			kill(server_pid, SIGUSR1);
		else
			kill(server_pid, SIGUSR2);
		usleep(400);
		bit--;
	}
}

int	check_input(int argc, char *argv[])
{
	int	correct_input;

	correct_input = 0;
	if (argc != 3)
		ft_printf("%s\n", "→ ./client <PID> <Message>");
	else if (!ft_isdigit_str_check(argv[1]))
	{
		ft_printf("%s", "Check the PID value");
		ft_printf("%s\n", " → You can only contain number.");
	}
	else if (*argv[2] == 0)
		ft_printf("%s\n", "Cannot send an empty message.");
	else
		correct_input = 1;
	return (correct_input);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		server_pid;
	char	*msg;

	i = 0;
	if (check_input(argc, argv) == 1)
	{
		server_pid = ft_atoi(argv[1]);
		msg = ft_strdup(argv[2]);
		while (msg[i] != '\0')
		{
			send_msg(server_pid, msg[i]);
			i++;
		}
		free(msg);
		send_msg(server_pid, '\n');
	}
	return (0);
}
