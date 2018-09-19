/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:47:33 by sriti             #+#    #+#             */
/*   Updated: 2018/06/18 11:52:38 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*m;
	unsigned char	*b;

	i = 0;
	m = (unsigned char *)dst;
	b = (unsigned char *)src;
	while (i < n)
	{
		m[i] = b[i];
		i++;
	}
	return (m);
}
