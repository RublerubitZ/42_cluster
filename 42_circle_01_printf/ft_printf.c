/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seku <seku@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:29:47 by seku              #+#    #+#             */
/*   Updated: 2024/06/22 16:39:07 by seku             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	datatype_check(va_list *ap, char datatype)
{
	if (datatype == 'c')
		return (ft_print_c(va_arg(*ap, int)));
	if (datatype == 's')
		return (ft_print_s(va_arg(*ap, char *)));
	if (datatype == 'p')
		return (ft_print_p(va_arg(*ap, void *)));
	if (datatype == 'd' || datatype == 'i')
		return (ft_print_di(va_arg(*ap, int)));
	if (datatype == 'u')
		return (ft_print_u(va_arg(*ap, unsigned int)));
	if (datatype == 'x')
		return (ft_print_xx(va_arg(*ap, unsigned int), true));
	if (datatype == 'X')
		return (ft_print_xx(va_arg(*ap, unsigned int), false));
	if (datatype == '%')
		return (ft_print_c('%'));
	else
		return (-1);
}

int	start_printf(va_list *ap, const char *format)
{
	int	i;
	int	cnt;
	int	datacheck;

	i = 0;
	cnt = 0;
	while (format[i])
	{
		if (format[i] != '%')
			datacheck = write(1, &format[i], 1);
		else if (format[++i] != '\0')
			datacheck = datatype_check(ap, format[i]);
		if (datacheck == -1)
			return (-1);
		cnt += datacheck;
		i++;
	}
	return (cnt);
}

int	ft_printf(const char *format, ...)
{
	int		tmp;
	va_list	ap;

	va_start(ap, format);
	tmp = start_printf(&ap, format);
	va_end(ap);
	return (tmp);
}
