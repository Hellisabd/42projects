/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:41:59 by bgrosjea          #+#    #+#             */
/*   Updated: 2023/10/30 15:44:18 by bgrosjea         ###   ########.fr       */
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
		if (*s != c && j == 0)
		{
			j = 1;
			i++;
		}
		else if (*s == c)
			j = 0;
		s++;
	}
	return (i);
}

char	*fill_dest(char const *s, var *Var)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(sizeof (char) * (Var->h - Var->i + 1));
	if (!dest)
		return (NULL);
	while (i < Var->h)
		dest[i++] = s[Var->i++];
	dest[i] = '\0';
	return (dest);
}

int	free_split(char **res, int j)
{	
	while (j >= 0)
	{
		free (res[j]);
		j--;
	}
	free (res);
	return(0);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	var 	*Var;

	Var->i = 0;
	Var->h = -1;
	Var->j = 0;
	res = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!res)
		return (0);
	while (Var->i <= ft_strlen(s))
	{
		if (s[Var->i] != c && Var->h < 0)
			Var->h = Var->i;
		else if ((s[Var->i] == c || Var->i == ft_strlen(s)) && Var->h >= 0)
		{
			res[Var->j] = fill_dest(s, Var);
			if (!res[Var->j++] && free_split(res, Var->j-1) == 0)
				return (NULL);
			Var->h = -1;
		}
		Var->i++;
	}
	res[Var->j] = 0;
	return (res);
}
