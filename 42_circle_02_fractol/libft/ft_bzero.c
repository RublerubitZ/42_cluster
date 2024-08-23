/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seku <seku@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:55:31 by seku              #+#    #+#             */
/*   Updated: 2024/03/18 23:24:55 by seku             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

/*// bzero TEST

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char buf[255];    
	struct mydata data;
	bzero(buf, 255);
	bzero((void *)&data, sizeof(data));
}*/
