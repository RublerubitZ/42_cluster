/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seku <seku@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:50:43 by seku              #+#    #+#             */
/*   Updated: 2024/03/19 22:27:32 by seku             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_strings(char const *s, char c)
{
	int		flag;
	size_t	str_n;

	flag = 0;
	str_n = 0;
	while (*s)
	{
		if (*s != c && flag == 0)
		{
			flag = 1;
			str_n++;
		}
		else if (*s == c)
			flag = 0;
		s++;
	}
	return (str_n);
}

static size_t	ft_count_chr(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s++ != c)
		len++;
	return (len);
}

static void	ft_free(char **tab, size_t n)
{
	if (!tab[n])
	{
		while (n > 0)
			free(tab[n--]);
		free(tab);
	}
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	str_n;
	size_t	n;
	size_t	len;

	str_n = ft_count_strings(s, c);
	split = (char **)malloc(sizeof(char *) * (str_n + 1));
	if (split == NULL)
		return (NULL);
	n = 0;
	while (n < str_n)
	{
		while (*s == c)
			s++;
		len = ft_count_chr(s, c);
		split[n] = (char *)malloc(sizeof(char) * (len + 1));
		ft_free(split, n);
		ft_strlcpy(split[n], (char *)s, len + 1);
		s = s + len;
		n++;
	}
	split[str_n] = 0;
	return (split);
}

/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
    char *s = "hello world it okay i am fine thank you, good";
    char **c = ft_split(s, ' ');
    int i = 0;
    while (c[i])
        printf("%s\n", c[i++]);
    return (0);
}*/
