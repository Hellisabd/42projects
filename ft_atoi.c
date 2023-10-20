int atoi(const char *nptr)
{
    size_t  i;
    int     sign;

    i = 0;
    while (nptr[i] != '\0' || (nptr[i] == ' ' && (nptr[i] >= 9 && nptr[i] <= 13)))
        i++;
    if (nptr[i] == '+')
        i++;
    if (nptr[i] == '-')
        {
            i++;
            sign = -1;
        }
}