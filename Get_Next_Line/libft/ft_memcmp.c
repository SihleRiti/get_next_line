/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 11:59:50 by sriti             #+#    #+#             */
/*   Updated: 2018/06/18 12:04:38 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*o;
	unsigned char	*s;

	o = (unsigned char*)s1;
	s = (unsigned char*)s2;
	while (n > 0)
	{
		if (*o != *s)
			return (*o - *s);
		o++;
		s++;
		n--;
	}
	return (0);
}
