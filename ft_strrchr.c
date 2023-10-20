/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:21:37 by bgrosjea          #+#    #+#             */
/*   Updated: 2023/10/19 12:39:36 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char *res;
	
	i = ft_strlen(s);
	while (s[i] != c && i > 0)
		i--;
	if (s[i] == c && s[i] != '\0')
	{
		res = (char *) s + i;
		return (res);
	}
	return (0);
}
