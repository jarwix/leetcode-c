char * generateTheString(int n)
{
    char    *result;
    int     i;
    
    result = (char *)malloc(sizeof(char) * (n + 1));
    result[n] = '\0';
    if (n % 2 == 0)
    {
        i = -1;
        while (++i < n-1)
            result[i] = 'a';
        while (i < n)
            result[i++] = 'b';
    }
    else
    {
        i = -1;
        while (++i < n)
            result[i] = 'a';
    }
    return result;
}
