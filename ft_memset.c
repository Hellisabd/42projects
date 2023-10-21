#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    size_t              i;
    unsigned char    *str;

    i = 0;
    str = (char *)s;
    while (i < n)
    {
        str[i] = c;
        printf("%zu : %d\n", i, str[i]);
        i++;
    }
    return (s);
}

int main(void)
{
    char tab[15];
    printf("ft_memset : %d\n", ft_memset(tab, 'a', sizeof (char) * 15));
    printf("memset : %d\n", memset(tab, 'a', sizeof (char) * 15));
    for (size_t i = 0; i < sizeof tab / sizeof tab[0]; ++i)
		printf("%zu : %d\n", i, tab[i]);
    return (0);
}