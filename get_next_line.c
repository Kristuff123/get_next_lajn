/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgraczyk <kgraczyk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 19:17:20 by kgraczyk          #+#    #+#             */
/*   Updated: 2024/06/26 21:49:53 by kgraczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read_and_append(int fd, char *the_string)
{
	char	*buf;
	int		read_bytes;

	buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf)
		return (NULL);
	read_bytes = 1;
	while (!ft_strchr(the_string, '\n') && read_bytes != 0)
	{
		read_bytes = read(fd, buf, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free(buf);
			free(the_string);
			return (NULL);
		}
		buf[read_bytes] = '\0';
		the_string = ft_strjoin(the_string, buf);
	}
	free(buf);
	return (the_string);
}

char	*get_next_line(int fd)
{
	char		*the_line;
	static char	*the_string;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	the_string = ft_read_and_append(fd, the_string);
	if (!the_string)
		return (NULL);
	the_line = ft_get_the_line(the_string);
	the_string = ft_cut_the_string(the_string);
	return (the_line);
}
