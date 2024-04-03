/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgraczyk <kgraczyk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 19:25:13 by kgraczyk          #+#    #+#             */
/*   Updated: 2024/04/03 18:32:06 by kgraczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *the_string, char *buf)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!the_string)
	{
		the_string = (char *)malloc(1 * sizeof(char));
		the_string[0] = '\0';
	}
	if (!the_string || !buf)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(the_string) + ft_strlen(buf)) + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (the_string)
		while (the_string[++i] != '\0')
			str[i] = the_string[i];
	while (buf[j] != '\0')
		str[i++] = buf[j++];
	str[ft_strlen(the_string) + ft_strlen(buf)] = '\0';
	free(the_string);
	return (str);
}

char	*ft_get_the_line(char *the_string)
{
	int		i;
	char	*str;

	i = 0;
	if (!the_string[i])
		return (NULL);
	while (the_string[i] && the_string[i] != '\n')
		i++;
	str = (char *)malloc(sizeof(char) * (i + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (the_string[i] && the_string[i] != '\n')
	{
		str[i] = the_string[i];
		i++;
	}
	if (the_string[i] == '\n')
	{
		str[i] = the_string[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_cut_the_string(char *the_string)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (the_string[i] && the_string[i] != '\n')
		i++;
	if (!the_string[i])
	{
		free(the_string);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(the_string) - i + 1));
	if (!str)
		return (NULL);
	i++;
	j = 0;
	while (the_string[i])
		str[j++] = the_string[i++];
	str[j] = '\0';
	free(the_string);
	return (str);
}
