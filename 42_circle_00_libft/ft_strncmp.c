/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seku <seku@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:27:47 by seku              #+#    #+#             */
/*   Updated: 2024/03/19 21:35:22 by seku             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;

	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	i = 0;
	while ((ptr_s1[i] != '\0' || ptr_s2[i] != '\0') && (i < n))
	{
		if (ptr_s1[i] > ptr_s2[i])
			return (1);
		else if (ptr_s1[i] < ptr_s2[i])
			return (-1);
		else
			i++;
	}
	return (0);
}
