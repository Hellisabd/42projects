#include "libft.h"

size_t    ft_strlen(const char *s)
{
    size_t    i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}
char *ft_strjoin(char const *s1, char const *s2)
{
    char    *dest;
    size_t  i;
    size_t  a;
    dest = (char *)malloc(sizeof (char) * (ft_strlen(s2) + ft_strlen(s1) + 1));
    i = 0;
    a = 0;
    while (s1[i] != '\0')
    {
        dest[i] = s1[i];
        i++;
    }
    while (s2[a] != '\0')
    {
        dest[i] = s2[a];
        i++;
        a++;
    }
    dest [i] = '\0';
    return (dest);
}

int main(void)
{
    printf("%s\n", ft_strjoin("bonj", "our"));
    return (0);
}