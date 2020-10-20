int maxDepth(char * s)
{
    int max = 0;
    int i = -1;
    int count = 0;
    
    while(s[++i])
    {
        if (s[i] == '(')
            ++count;
        if (s[i] == ')')
            --count;
        if (count > max)
            max = count;
    }
    return max;
}
