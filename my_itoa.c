#include "libft.h"

int	ft_unity_nbr(int n)
{
	int	div;
	int	t;
	int	tmp;
	int	u;

	t = 0;
	u = 0;
	tmp = 0;
	div = 100000000;
	if (n < 0)
	{

	}
	while (div > 0)
	{
		tmp = n / div;
		tmp %= 10;
		if (tmp > 0)
			t = 1;
		if (t == 1)
			u++;
	}
	return (u);
}

int	fill_tab(char res, int t, int tmp)
{
	res[t - 1] = tmp + 48;
	t++;
}

char *ft_itoa(int n)
{
	char	*res;
	int	d;
	int	t;
	int	tmp;

	d = 100000000;
	v = 0;
	i = 0;
	if (!(res = malloc(sizeof (char) * (ft_unity_nbr(n) + 1))))
		return(0);
	while (d > 0)
	{
		tmp = (n / div) % 10;
		if (tmp > 0)
			t = 1;
		if (v > 1)
		{
			ft_filltab(res, t, tmp);
		}
		d /= 10;
	}
	res[] = '\0';
	return (res);
}

int	main(void)
{
	int n = 23425;
	printf("%s\n", ft_itoa(n));
}
