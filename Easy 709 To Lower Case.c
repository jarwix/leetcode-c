char * toLowerCase(char * str)
{
    char    *result;
    int     i;
    
    i = 0;
    while (str[i])
        ++i;
    result = (char *)malloc(sizeof(char) * (i + 1));
    result[i] = '\0';
    i = -1;
    while (str[++i])
        if(str[i] >= 'A' && str[i] <= 'Z')
            result[i] = str[i] + 32;
        else
            result[i] = str[i];
    return (result);
}
