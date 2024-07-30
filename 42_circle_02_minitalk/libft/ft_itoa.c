/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seku <seku@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 12:25:34 by seku              #+#    #+#             */
/*   Updated: 2024/07/30 23:37:26 by seku             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_minuscheck(int n)
{
	size_t	minus_n;

	minus_n = n;
	if (n < 0)
		return (minus_n * -1);
	return (minus_n);
}

static int	ft_intlen(int n)
{
	int		len;
	size_t	minus_n;

	len = 1;
	minus_n = ft_minuscheck(n);
	while (minus_n)
	{	
		minus_n = (minus_n / 10);
		if (minus_n)
			len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	minus_n;
	int		i;
	int		len;

	minus_n = ft_minuscheck(n);
	i = 1;
	len = ft_intlen(n);
	if (n < 0)
		len++;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	while (i <= len)
	{
		if (str[len - i] != '-')
			str[len - i] = (minus_n % 10) + '0';
		minus_n /= 10;
		i++;
	}
	str[len] = '\0';
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	int i = 0;
	int tab[5] = {-2147483648, -42, 0, 42, 2147483647};

	while (i < 5)
		printf("%s\n", ft_itoa(tab[i++]));

	return 0;
}*/
