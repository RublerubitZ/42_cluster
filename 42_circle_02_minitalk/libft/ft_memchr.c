/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seku <seku@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 21:50:41 by seku              #+#    #+#             */
/*   Updated: 2024/03/19 22:17:38 by seku             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	temp_c;
	unsigned char	*temp_str;

	temp_c = (unsigned char)c;
	temp_str = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (temp_str[i] == temp_c)
			return ((void *)&temp_str[i]);
		i++;
	}
	return (NULL);
}
