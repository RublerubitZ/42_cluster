/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seku <seku@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:31:41 by seku              #+#    #+#             */
/*   Updated: 2024/03/19 22:23:56 by seku             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*str_temp;
	char	to_find;
	int		i;

	str_temp = (char *)str;
	to_find = (char)c;
	i = ft_strlen(str);
	if (to_find == '\0')
		return (&str_temp[i]);
	while (i >= 0)
	{
		if (str_temp[i] == to_find)
			return (&str_temp[i]);
		i--;
	}
	return (NULL);
}
