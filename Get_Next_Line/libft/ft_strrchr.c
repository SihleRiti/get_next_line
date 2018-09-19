/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 15:21:14 by sriti             #+#    #+#             */
/*   Updated: 2018/06/18 12:08:57 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*a;

	a = (char*)s;
	i = ft_strlen(s);
	if (c == '\0')
		return (a + i);
	while (i != 0)
	{
		if (a[i] == (char)c)
			return (a + i);
		i--;
	}
	if (s[0] == (char)c)
		return (a);
	return (0);
}
