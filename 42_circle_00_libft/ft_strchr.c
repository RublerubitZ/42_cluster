/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seku <seku@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:25:19 by seku              #+#    #+#             */
/*   Updated: 2024/03/19 22:04:49 by seku             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	temp;
	char	*str_temp;

	i = 0;
	temp = (char)c;
	str_temp = (char *)str;
	while (str_temp[i] != temp)
	{
		if (str_temp[i] == '\0')
			return (NULL);
		i++;
	}
	return (&str_temp[i]);
}
