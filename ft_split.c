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

size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (*s)
	{
		if (*s != c && i == 0)
		{
			i = 1;
			j++;
		}
		else if (*s == c)
			i = 0;
		s++;
	}
	return (j);
}

char	*fill_dest(char const *s, size_t start, size_t finish)
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = (char *)malloc(sizeof (char) * (start - finish + 1));
	if (!dest)
		return (NULL);
	while (start < finish)
	{
		dest[i++] = s[start++];
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		j;
	size_t	i;
	int		h;

	i = 0;
	h = -1;
	j = 0;
	res = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!res)
		return (0);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && h < 0)
			h = i;
		else if ((s[i]) == c || (i == ft_strlen(s) && h >= 0))
		{
			res[j] = fill_dest(s, h, i);
			h = -1;
			j++;
		}
		i++;
	}
	res[j] = 0;
	return (res);
}

int	main(void)
{
	char const *s = "bonjour je m appelle basile";
	char **tab;
	tab = ft_split(s, ' ');
	int	i;
	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}
