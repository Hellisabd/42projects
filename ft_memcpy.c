#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t  i;
    char *d;
    const char *s;

    s = (const char *)src;
    d = (char *)dest;
    while (i < n && s[i] != '\0')
    {
        d[i] = s[i];
        i++; 
    }
    return (d);
}

int main(void)
{
    const char *src = "bonjour";
    char *dest[10];
    printf("ma fonction : %s\n", ft_memcpy(dest, src, 7));
    printf("sa fonction : %s\n", memcpy(dest, src, 7));
}