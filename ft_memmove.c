#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    char    *s;
    char    *d;
    size_t  i;
    
    i = 0;
    s = (char *)src;
    d = (char *)dest;
    if (d > s)
    {
        while (n > 0)
        {
            d[n] = s[n];
            n--;
        }
        d[n] = s[n];
        return (d);
    }
    else
    {
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    return (dest);
}

int main(void)
{
    const char *src = "bonjour";
    //char *dest = "bonjoubonjour";
    printf("ma fonction : %p\n", ft_memmove("bonjoubonjour", src, 7));
    printf("sa fonction : %p\n", memmove("bonjoubonjour", src, 7));
}