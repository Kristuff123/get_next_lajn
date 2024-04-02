/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgraczyk <kgraczyk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 19:23:05 by kgraczyk          #+#    #+#             */
/*   Updated: 2024/04/02 19:30:20 by krs              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

char	*get_next_line(int fd);
char	*ft_read_to_left_str(int fd, char *string);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *string, char *buffer);
size_t	ft_strlen(char *s);
char	*ft_get_line(char *string);
char	*ft_new_left_str(char *string);

#endif
