/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seku <seku@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:26:29 by seku              #+#    #+#             */
/*   Updated: 2024/08/01 01:27:40 by seku             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*data_str;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE > INT_MAX)
		return (NULL);
	data_str = ft_read_data(fd, data_str);
	if (data_str == NULL)
		return (NULL);
	line = ft_printline(data_str);
	data_str = ft_left_str(data_str);
	return (line);
}

char	*ft_read_data(int fd, char *data_str)
{
	char	*temp_str;
	int		read_result;

	temp_str = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (temp_str == NULL)
		return (NULL);
	read_result = 1;
	while ((ft_strchr(data_str, '\n') == NULL) && (read_result != 0))
	{
		read_result = read(fd, temp_str, BUFFER_SIZE);
		if (read_result == -1)
		{
			free(temp_str);
			temp_str = 0;
			return (0);
		}
		temp_str[read_result] = 0;
		data_str = ft_strjoin(data_str, temp_str);
	}
	free(temp_str);
	return (data_str);
}

char	*ft_printline(char *data_str)
{
	int		i;
	char	*line;

	i = 0;
	if (data_str[i] == '\0')
		return (NULL);
	while (data_str[i] && data_str[i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if (line == NULL)
		return (NULL);
	i = 0;
	while (data_str[i] && data_str[i] != '\n')
	{
		line[i] = data_str[i];
		i++;
	}
	if (data_str[i] == '\n')
	{
		line[i] = data_str[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_left_str(char *data_str)
{
	int		i;
	int		j;
	char	*newstr;

	i = 0;
	while (data_str[i] && data_str[i] != '\n')
		i++;
	if (data_str[i] == '\0')
	{
		free(data_str);
		return (NULL);
	}
	newstr = (char *)malloc(sizeof(char) * (ft_strlen(data_str) - i + 1));
	if (newstr == NULL)
		return (NULL);
	i++;
	j = 0;
	while (data_str[i])
		newstr[j++] = data_str[i++];
	newstr[j] = '\0';
	free(data_str);
	return (newstr);
}
