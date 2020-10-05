int maxPower(char * s)
{
    int     i = -1;
    int     count = 1;
    int     max = 1;
    
    while (s[++i])
    {
        if ((i != 0) && (s[i] == s[i-1]))
            ++count;
        if ((i != 0) && (s[i] != s[i-1]))
        {
            if (count > max)
                max = count;
            count = 1;
        }
    }
    if ((i != 0) && (s[i] != s[i-1]))
        {
            if (count > max)
                max = count;
            count = 1;
        }
    return max;
}