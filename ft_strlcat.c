/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:04:06 by bgrosjea          #+#    #+#             */
/*   Updated: 2023/10/24 14:22:02 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	b;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	b = i;
	while (src[i - b] != '\0' && i < size - 1)
	{
		dst[i] = src[i - b];
		i++;
	}
	if (b < size)
		dst[i] = '\0';
	return (b + ft_strlen(src));
}
