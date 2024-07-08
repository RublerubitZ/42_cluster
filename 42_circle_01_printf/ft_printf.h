/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seku <seku@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:36:20 by seku              #+#    #+#             */
/*   Updated: 2024/06/26 16:49:51 by seku             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdbool.h>

int	datatype_check(va_list *ap, char datatype);
int	start_printf(va_list *ap, const char *format);
int	ft_printf(const char *format, ...);
int	ft_strlen(char *str);
int	ft_print_c(int c);
int	ft_print_s(char *str);
int	ft_print_p(void *addr);
int	ft_print_di(int n);
int	ft_print_u(unsigned int n);
int	ft_print_xx(unsigned int n, bool case_check);

#endif
