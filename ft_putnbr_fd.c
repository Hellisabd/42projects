/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:29:08 by bgrosjea          #+#    #+#             */
/*   Updated: 2023/10/25 16:58:15 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	l_n;
	int	div;
	int	t;
	int	res;

	div = 100000000;
	res = 0;
	t = 0;
	l_n = n;
	if (n < 0)
	{
		write (fd, "-", 1);
		l_n = (long)-n;
	}
	while (div > 0)
	{
		res = l_n / div;
		res = res % 10 + '0';
		if (res > '0')
			t = 1;
		if (t == 1)
			write (fd, &res, 1);
		div /= 10;
	}
}

int	main()
{
	ft_putnbr_fd(355524, 1);
}
