#include "libft.h"

size_t count_words(char const *s, char c)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c || s[i + 1] == '\0')
        {
            j++;
            while (s[i] == c)
                i++;
        }
        i++;
    }
    return (j);
}

char    *fill_dest(char const *s, size_t start, size_t finish)
{
    char    *dest;
    size_t  i;

    i = 0;
    if (!(dest = (char *)malloc(sizeof (char) * (start - finish + 1))))
        return (0);
    while (start <= finish)
    {
        dest[i] = s[start];
        i++;
        start++;
    }
    return (dest);
}

char **ft_split(char const *s, char c)
{
    char    **res;
    int     j;
    size_t  i;
    size_t  h;

    i = 0;
    h = -1;
    j = 0;
    if (!s || !(res = malloc((count_words(s, c) + 1) * sizeof(char *))))
		return (0);
    while (s[i] != '\0')
        {
            if (s[i] != c && h < 0)
                h = i;
            else
            {
                res[j] = fill_dest(s, h, i);
                h = -1;
            }
            i++;
        }
}

int main(void)
{
    int i;
    i = 0;
    char **dest;
    dest = ft_split("bonjour je m appelle basile", ' ');
    while (i < 5)
    {
        printf ("%s\n", dest[i]);
        i++;
    }
}