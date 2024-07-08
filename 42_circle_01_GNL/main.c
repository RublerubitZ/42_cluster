/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seku <seku@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 21:50:03 by seku              #+#    #+#             */
/*   Updated: 2024/06/28 21:41:59 by seku             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"

int main(void)
{
	int fd;
	char *line;

	fd = 0;
//	fd = open("test.txt", O_RDONLY);

	while ((line = get_next_line(fd)) != NULL)
 	{
		 printf("%s", line);
		 free(line);
	}
	close(fd);
	return (0);
}
