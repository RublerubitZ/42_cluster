/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seku <seku@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:26:29 by seku              #+#    #+#             */
/*   Updated: 2024/06/21 20:00:35 by seku             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*char	*get_next_line(int fd)
{
	static char	*backup;
	char		*buff;
	ssize_t		read_size;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (0);
	buff = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (buff == NULL)
		return (0);
	while (!(ft_strchr(backup, '\n')))
	{
		read_size = buff_read(fd, buff);
		if (read_size == -1)
			return (0);
		backup = ft_strjoin(backup, buff);
		if (backup == NULL)
			return (0);
		if (read_size == 0)
			return (meet_last(&backup, buff));
	}
	return (meet_line(&backup, buff));
}

static ssize_t	buff_read(int fd, char *buff)
{
	ssize_t	read_size;

	read_size = read(fd, buff, BUFFER_SIZE);
	if (read_size < 0)
	{
		free(buff);
		buff = 0;
		return (-1);
	}
	buff[read_size] = '\0';
	return (read_size);
}*/

/*char	*get_next_line(int fd)
{
	static char	*total_line;
	char		*buf;
	ssize_t		read_result;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (0);
	buf = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (buf == NULL)
		return (0);
	while (!(ft_strchr(backup, '\n')))
	{
		read_result = buff_read(fd, buf);
	}
}*/

char	*get_next_line(int fd)
{
	static char	*total_str;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	total_str = ft_get_read(fd, total_str);
	if (total_str == NULL)
		return (NULL);
	line = ft_get_line(total_str);
	total_str = ft_getrest(total_str);
	return (line);
}

char	*ft_get_read(int fd, char *str)
{
	char	*temp_str;
	int		read_result;

	temp_str = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (temp_str == NULL)
		return (NULL);
	read_result = 1;
	while (!ft_strchr(str, '\n') && (read_result != 0))
	{
		read_result = read(fd, temp_str, BUFFER_SIZE);
		if (read_result == -1)
		{
			free(temp_str);
			temp_str = 0;
			return (0);
		}
		temp_str[read_result] = 0;
		str = ft_strjoin(str, temp_str);
	}
	free(temp_str);
	return (str);
}

char	*ft_get_line(char *total_str)
{
	int		i;
	char	*line;

	i = 0;
	if (!total_str[i])
		return (NULL);
	while (total_str[i] && total_str[i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if (line == NULL)
		return (NULL);
	i = 0;
	while (total_str[i] && total_str[i] != '\n')
	{
		line[i] = total_str[i];
		i++;
	}
	if (total_str[i] == '\n')
	{
		line[i] = total_str[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_getrest(char *total_str)
{
	int		i;
	int		j;
	char	*restof;

	i = 0;
	while (total_str[i] && total_str[i] != '\n')
		i++;
	if (!total_str[i])
	{
		free(total_str);
		return (NULL);
	}
	restof = (char *)malloc(sizeof(char) * (ft_strlen(total_str) - i + 1));
	if (restof == NULL)
		return (NULL);
	i++;
	j = 0;
	while (total_str[i])
		restof[j++] = total_str[i++];
	restof[j] = '\0';
	free(total_str);
	return (restof);
}
