/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_di.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seku <seku@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 20:36:04 by seku              #+#    #+#             */
/*   Updated: 2024/06/26 14:23:23 by seku             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_check_di(int n)
{
	size_t	digits;

	digits = 0;
	if (n <= 0)
		digits += 1;
	while (n != 0)
	{
		n /= 10;
		digits += 1;
	}
	return (digits);
}

static void	ft_work_di(int n)
{
	static char	digits[] = "0123456789";

	if (n > 9)
		ft_work_di(n / 10);
	write(1, &digits[n % 10], 1);
}

int	ft_print_di(int n)
{
	int	len;

	if (n == -2147483648)
		return ((write(1, "-2147483648", 11)));
	len = ft_check_di(n);
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	ft_work_di(n);
	return (len);
}
