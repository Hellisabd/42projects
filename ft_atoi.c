#include "libft.h"

int atoi(const char *nptr)
{
    size_t  i;
    int     sign;
    long int     res;

    i = 0;
    sign = 1;
    res = 0;
    while (nptr[i] != '\0' || (nptr[i] == ' ' && (nptr[i] >= 9 && nptr[i] <= 13)))
        i++;
    if (nptr[i] == '+')
        i++;
    if (nptr[i] == '-')
        {
            i++;
            sign = -1;
        }
    while (nptr[i] <= 9 && nptr[i] >= 0)
    {
        res = res * 10 + (nptr[i] - 48);
        i++;
    }
    if (res == 2147483648)
        return (-2147483648);
    return ((int)res * sign);
}