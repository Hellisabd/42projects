/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:29:35 by bgrosjea          #+#    #+#             */
/*   Updated: 2023/10/23 13:03:13 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (i < len)
	{
		while (big[i] == little[j] && i < len)
		{
			if (little[j + 1] == '\0' && big[i] == little[j])
				return ((char *) big + (i - j));
			i++;
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}
