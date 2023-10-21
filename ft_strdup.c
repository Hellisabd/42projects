#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char    *ft_strdup(const char *s)
{
    size_t  i;
    char    *dest;

    i = 0;
    dest = (char *)malloc (sizeof(char) * ft_strlen(s));
    while (s[i] != '\0')
    {
        dest[i] = s[i];
        i++;
    }
    return (dest);
}

int     main(void)
{
    printf ("%s", ft_strdup("bonjour"));
}