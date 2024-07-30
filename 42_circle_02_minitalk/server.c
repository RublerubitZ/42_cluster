/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seku <seku@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 22:33:49 by seku              #+#    #+#             */
/*   Updated: 2024/07/30 21:22:53 by seku             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_sighandler_t(int handler)
{
	int	i;	
}

static void	print_msg(int signal)
{
	static int	bit;
	static int	character;

	if (signal == SIGUSR1)
		character += 1 << (7 - bit);
	bit++;
	if (bit == 8)
	{
		ft_putchar_fd(character, 1);
		bit = 0;
		character = 0;
	}
}

int	main(int argc, char *argv[])
{
	pid_t	server_pid;

	server_pid = getpid();
	if (argc != 1)
	{
		ft_printf("%s\n", "You can only enter → ./server");
		return (0);
	}
	ft_printf("%s", "Server PID : ");
	ft_printf("%d\n", server_pid);
	signal(SIGUSR1, print_msg);
	signal(SIGUSR2, print_msg);
	while (1)
		pause();
	return (0);
}
