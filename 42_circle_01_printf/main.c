/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seku <seku@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:48:47 by seku              #+#    #+#             */
/*   Updated: 2024/06/27 21:22:34 by seku             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	i;
	int	*ptr;

	i = 0;
	ptr = &i;

	printf("printf : Hello World!\n");
	ft_printf("ft_printf : Hello World!\n\n");

	printf("printf c : %c\n", 'a');
	ft_printf("ft_printf c : %c\n\n", 'a');

	printf("printf s : %s %s %s\n", "asdfasd", "asdf", "asdf");
	ft_printf("ft_printf s : %s %s %s \n\n", "asdfasd", "asdf", "asdf");

	printf("print d : %d\n", -12345);
	ft_printf("ft_printf d : %d\n\n", -12345);

	printf("printf u : %u\n", -12345);
	ft_printf("ft_printf u: %u\n\n", -12345);
	printf("printf u : %u\n", 12345);
	ft_printf("ft_printf u : %u\n\n", 12345);

	printf("printf p : %p\n", ptr);
	ft_printf("ft_printf p : %p\n\n", ptr);

	printf("print x : %x\n", 3735929054u);
	ft_printf("print x %x\n\n", 3735929054u);

	printf("print x : %X\n", 3735929054u);
	ft_printf("print x %X\n\n", 3735929054u);

	printf("print %% : %%\n");
	ft_printf("ft_print %% : %%\n\n");
	
	printf("printf void* : %p\n", (void *)0);
	ft_printf("ft_printf void* : %p\n", (void *)0);

	printf("printf char* : %s\n", (char *)0);
	ft_printf("ft_printf char* : %s\n", (char *)0);
}
