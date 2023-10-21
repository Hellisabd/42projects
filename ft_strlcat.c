/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:16:57 by bgrosjea          #+#    #+#             */
/*   Updated: 2023/10/20 14:46:18 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t b;
	
	b = ft_strlen(dst);
	i = 0;
	while (size > 0)
	{
		dst[b + i] = src[i];
		i++;
		size--;
	}
	dst[b + i] = '\0';
	return (b + i);
}