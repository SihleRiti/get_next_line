/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 11:56:38 by sriti             #+#    #+#             */
/*   Updated: 2018/07/06 14:33:04 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "./libft/libft.h"

# define BUFF_SIZE	8

typedef struct		s_line
{
	int				ret;
	int				i;
	char			buf[BUFF_SIZE + 1];
}					t_line;

int					get_next_line(const int fd, char **line);

#endif
