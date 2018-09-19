/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 10:30:05 by sriti             #+#    #+#             */
/*   Updated: 2018/06/18 12:17:06 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int k;
	int len;

	i = 0;
	len = ft_strlen((char *)needle);
	if (len == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		k = 0;
		while (haystack[i + k] == needle[k])
		{
			if (k == len - 1)
				return ((char *)haystack + i);
			k++;
		}
		i++;
	}
	return (NULL);
}
