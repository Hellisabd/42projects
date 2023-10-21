#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t      i;
    const char  *src;

    i = 0;
    src = (const char *)s;
    while (i < n)
    {

    }
    if (src[i] == c)
        return (src + i);
    return (0);
}