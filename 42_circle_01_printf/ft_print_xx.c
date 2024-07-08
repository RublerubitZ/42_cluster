/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_xx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seku <seku@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 22:44:41 by seku              #+#    #+#             */
/*   Updated: 2024/06/26 16:48:33 by seku             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_check_xx(unsigned int n)
{
	size_t	digits;

	digits = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		digits += 1;
		n /= 16;
	}
	return (digits);
}

static void	ft_work_xx(unsigned int n, bool case_check)
{
	static char	case_big[] = "0123456789ABCDEF";
	static char	case_small[] = "0123456789abcdef";

	if (n >= 16)
		ft_work_xx((n / 16), case_check);
	if (case_check == false)
		write(1, &case_big[n % 16], 1);
	else
		write(1, &case_small[n % 16], 1);
}

int	ft_print_xx(unsigned int n, bool case_check)
{
	ft_work_xx(n, case_check);
	return (ft_check_xx(n));
}
