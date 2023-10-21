#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char   *str1;
    unsigned char   *str2;
    size_t          i;

    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    i = 0;
    while (i < n && str1[i] == str2[i])
        i++;
    return (str1[i] - str2[i]);
}

int main(void)
{
    char *s1 = "bonj";
    char *s2 =  "bonjour";

    printf("ma fonction : %d\n", ft_memcmp(s1, s2, 4));
    printf("sa fonction : %d\n", memcmp(s1, s2, 4));
    return (0);
}