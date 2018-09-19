/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 12:49:49 by sriti             #+#    #+#             */
/*   Updated: 2018/07/04 14:25:21 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	e;

	i = 0;
	a = (unsigned char *)b;
	e = (unsigned char)c;
	while (i < len)
	{
		a[i] = e;
		i++;
	}
	return (a);
}
