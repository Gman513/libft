/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oexall <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/16 07:33:11 by oexall            #+#    #+#             */
/*   Updated: 2016/05/30 09:10:02 by oexall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

static int	ft_read(const int fd, char **file)
{
	char		*buff;
	char		*nstr;
	int			read_bytes;

	if (!(buff = (char *)malloc(BUFF_SIZE + 1)))
		return (-1);
	read_bytes = read(fd, buff, BUFF_SIZE);
	if (read_bytes > 0)
	{
		buff[read_bytes] = '\0';
		nstr = ft_strjoin(*file, buff);
		if (!(nstr))
			return (-1);
		free(*file);
		*file = nstr;
	}
	if (buff)
		free(buff);
	return (read_bytes);
}

int			get_next_line(const int fd, char **line)
{
	static char	*file;
	char		*endl_index;
	int			ret;

	if (!file && !(file = (char*)malloc(sizeof(char))))
		return (-1);
	endl_index = ft_strchr(file, '\n');
	while (endl_index == NULL)
	{
		if ((ret = ft_read(fd, &file)) == 0)
		{
			if ((endl_index = ft_strchr(file, '\0')) == file)
				return (0);
		}
		else if (ret < 0)
			return (-1);
		else
			endl_index = ft_strchr(file, '\n');
	}
	if (!(*line = ft_strsub(file, 0, endl_index - file)))
		return (-1);
	endl_index = ft_strdup(endl_index + 1);
	free(file);
	file = endl_index;
	return (1);
}
