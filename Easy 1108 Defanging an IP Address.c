char * defangIPaddr(char * address)
{
    char    *str;
    int     i;
    int     j;
    int     countpoint;
    
    countpoint = 0;
    i = 0;
    while(address[i] != '\0')
    {
        if (address[i] == '.')
            countpoint = countpoint + 3;
        else
            countpoint++;
        i++;
    }
    str = (char *)malloc(sizeof(char) * (countpoint + 1));
    i = 0;
    j = 0;
    while (address[i] != '\0')
    {
        if (address[i] == '.')
        {
            str[j++] = '[';
            str[j++] = '.';
            str[j++] = ']';
        }
        else
            str[j++] = address[i];
        i++;
    }
    str[j] = '\0';
    return str;
}
