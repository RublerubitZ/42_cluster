/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seku <seku@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:53:31 by seku              #+#    #+#             */
/*   Updated: 2024/03/06 09:39:01 by seku             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int	main(void)
{
	ft_putchar_fd('a', 0);
	write(1, "\n", 1);
}*/

//0을 넣어도 'a' , 1을 넣어도 'a' 출력 ,
//2를 넣어도 'a' 출력 , 3 이후로는 출력 X

// File Descriptor 0 :: 표준 입력(Standard Input)
// File Descriptor 1 :: 표준 출력(Standard Output)
// File Descriptor 2 :: 표준 에러 출력 (Standard Error)

// 표준 입력 :: fd가 open -> 
