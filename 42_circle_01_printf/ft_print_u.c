/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seku <seku@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 20:36:04 by seku              #+#    #+#             */
/*   Updated: 2024/06/26 14:25:14 by seku             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_check_u(unsigned int n)
{
	size_t	digits;

	digits = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		digits += 1;
	}
	return (digits);
}

void	ft_work_u(unsigned int n)
{
	static char	digits[] = "0123456789";

	if (n > 9)
		ft_work_u(n / 10);
	write(1, &digits[n % 10], 1);
}

int	ft_print_u(unsigned int n)
{
	ft_work_u(n);
	return (ft_check_u(n));
}
