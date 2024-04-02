/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgraczyk <kgraczyk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 19:23:05 by kgraczyk          #+#    #+#             */
/*   Updated: 2024/04/02 20:35:32 by kgraczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

char	*get_next_line(int fd);
char	*ft_read_and_join(int fd, char *the_string);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *the_string, char *buffer);
size_t	ft_strlen(char *s);
char	*ft_get_line(char *the_string);
char	*ft_update_the_string(char *the_string);

#endif
