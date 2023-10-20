/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:29:35 by bgrosjea          #+#    #+#             */
/*   Updated: 2023/10/20 13:40:32 by bgrosjea         ###   ########.fr       */
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
		return((char *)big);
	while (len > 0)
	{
		while (big[i] == little[j])
			{
				if(little[j + 1] == '\0' && big[i] == little[j])
					return ((char *) big + (i - j));
				i++;
				j++;
			}
		i++;
		j = 0;
		len--;
	}
	return (0);
}
