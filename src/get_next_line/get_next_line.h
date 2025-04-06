/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:   by Just'                               #+#    #+#             */
/*   Updated:   by Just'                              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

// Standard Libraries

# include <stdlib.h>
# include <unistd.h>

// My library

# include "../../inc/justlib.h"

// Buffer

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 60
# endif

// Structure

typedef struct s_buf
{
	char	buffer[BUFFER_SIZE];
	int		buf_read;
	int		buf_pos;
}	t_buf;

// get_next_line.c

char		*get_next_line(int fd);
int			ft_read_buffer(t_buf *buf, int fd);

#endif
