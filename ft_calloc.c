/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:41:59 by bgrosjea          #+#    #+#             */
/*   Updated: 2023/10/25 19:08:20 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;
	int		i;

	i = nmemb * size;
	if (i > INT_MAX)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	tab = malloc(nmemb * size);
	if (!tab)
		return (NULL);
	ft_bzero(tab, nmemb * size);
	return (tab);
}
