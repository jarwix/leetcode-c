int reverse(int x)
{
    int             i;
    int             k;
    int             neg;
    int             *result;
    long int        mass;
    
    if (x == -2147483648)
        return 0;
    result = (int *)malloc(sizeof(int) * 10);
    if (x < 0)
    {
        neg = -1;
        x *= -1;
    }
    else
        neg = 1;
    i = -1;
    while (x > 0)
    {
        result[++i] = x%10;
        x = x/10;
    }
    mass = 0;
    k = -1;
    while (i-- >= 0)
    {
        mass *= 10;
        mass += (long int)result[++k];
    }
    if (mass > 2147483648 || (mass == 2147483648 && neg == -1))
        return 0;
    else
        return (((int)mass) * neg);
}
