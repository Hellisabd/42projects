/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:41:59 by bgrosjea          #+#    #+#             */
/*   Updated: 2023/10/19 12:14:45 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	i = 0;
	if (ft_strlen(s) < start)
	{
		dest = malloc(sizeof(char) * 1);
		if (!dest)
			return (NULL);
		dest[0] = '\0';
		return (dest);
	}
	dest = (char *)malloc(sizeof (char) * (len + 1));
	if (!dest)
		return (NULL);
	while (i < len)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
