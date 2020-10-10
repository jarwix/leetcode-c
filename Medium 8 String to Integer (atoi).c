int myAtoi(char * str)
{
    long int        numb;
    int             i = 0;
    int             neg = 1;
    
    while (str[i] == ' ')
         ++i;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            neg = -1;
            if ((i != 0) && (str[i-1] == '-' || str[i-1] == '+'))
                return 0;
        }
        if (str[i] == '+')
            if ((i != 0) && (str[i-1] == '-' || str[i-1] == '+'))
                return 0;
        ++i;
    }
    numb = 0;
    while(str[i] >= '0' && str[i] <= '9')
    {
        numb *= 10;
        numb += (long int)(str[i++] - '0');
        if (numb > 2147483647)
        {
            if (neg == -1)
                return -2147483648;
            else
                return 2147483647;
        }
    }
    return ((int)numb * neg);
}
