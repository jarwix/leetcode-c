char * freqAlphabets(char * s)
{
    int i;
    int max;
    int count;
    char *result;
    
    i = 0;
    count = 0;
    while(s[i])
        ++i;
    max = --i;
    while(i >= 0)
    {
        if (s[i] == '#')
        {
            i -= 3;
            ++count;
        }
        else if (s[i] >= '0' && s[i--] <= '9')
            ++count;
    }
    result = (char *)malloc(sizeof(char) * (count + 1));
    result[count--] = '\0';
    i = max;
    while(i >= 0)
    {
        if (s[i] == '#')
        {
            result[count--] = (char)((((s[i - 2] - '0') * 10) + (s[i - 1] - '0')) + 96);
            i -= 3;
        }
        else if (s[i] >= '0' && s[i] <= '9')
            result[count--] = (char)((s[i--] - '0') + 96);
    }
    return result;
}
