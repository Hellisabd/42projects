/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:41:59 by bgrosjea          #+#    #+#             */
/*   Updated: 2023/10/19 12:14:45 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	i;
	size_t	a;

	if (!(dest = (char *)malloc(sizeof (char) * (ft_strlen(s2) + ft_strlen(s1) + 1))))
		return (0);
	i = 0;
	a = 0;
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[a] != '\0')
	{
		dest[i] = s2[a];
		i++;
		a++;
	}
	dest [i] = '\0';
	return (dest);
}
