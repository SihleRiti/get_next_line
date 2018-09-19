/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 11:48:27 by sriti             #+#    #+#             */
/*   Updated: 2018/06/18 12:09:32 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*d1;
	unsigned char	*s1;
	unsigned char	new_c;

	i = 0;
	d1 = (unsigned char *)dst;
	s1 = (unsigned char *)src;
	new_c = (unsigned char)c;
	while (i < n)
	{
		d1[i] = s1[i];
		if (s1[i] == new_c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
