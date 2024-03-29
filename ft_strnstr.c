/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbaboom <arbaboom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:07:50 by arbaboom          #+#    #+#             */
/*   Updated: 2022/03/19 09:33:41 by arbaboom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (1)
	{
		if (needle[j] == '\0')
			return ((char *)(haystack + (i - j)));
		if (haystack[i] == needle[j])
			j++;
		else
		{
			i -= j;
			j = 0;
		}
		if (haystack[i] == '\0' || i >= len)
			return (NULL);
		i++;
	}
}
