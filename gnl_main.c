/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgraczyk <kgraczyk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 21:45:32 by kgraczyk          #+#    #+#             */
/*   Updated: 2024/06/26 21:47:33 by kgraczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	char	*line;
	int		i;
	int		fd1;
/*
	fd1 = open("tests/test.txt", O_RDONLY);
	i = 1;
	while (i < 1000)
	{
		line = get_next_line(fd1);
		printf("line [%02d]: %s", i, line);
		printf("\n");
		free(line);
		i++;
	}
	close(fd1);
*/
	fd1 = open("tests/test2.txt", O_RDONLY);
	i = 1;
	while (i < 50)
	{
		line = get_next_line(fd1);
		printf("line [%02d]: %s", i, line);
		printf("\n");
		free(line);
		i++;
	}
	close(fd1);
	return (0);
}