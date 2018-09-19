/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 15:12:09 by sriti             #+#    #+#             */
/*   Updated: 2018/06/18 12:01:14 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	int			m;
	char		*z;
	char		*s;

	if (*needle == '\0')
		return ((char *)haystack);
	z = (char *)haystack;
	s = (char *)needle;
	i = 0;
	m = ft_strlen(s);
	while (z[i] != '\0' && (i + m) <= len)
	{
		if (ft_strncmp((z + i), s, m) == 0)
		{
			return (z + i);
		}
		i++;
	}
	return (NULL);
}
