void reverseString(char* s, int sSize)
{
    int     i;
    char    c;
    
    i = -1;
    while(++i < sSize/2)
    {
        c = s[i];
        s[i] = s[sSize - i - 1];
        s[sSize - i - 1] = c;
    }
    return s;
}
