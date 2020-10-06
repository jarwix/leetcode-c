int balancedStringSplit(char * s)
{
    int i;
    int r_count;
    int l_count;
    int result;
    
    r_count = 0;
    l_count = 0;
    result = 0;
    i = -1;
    while (s[++i])
    {
        if(s[i] == 'R')
            ++r_count;
        if(s[i] == 'L')
            ++l_count;
        if(r_count == l_count && r_count != 0)
        {
            r_count = 0;
            l_count = 0;
            ++result;
        }
    }
    return result;
}
