int maxLengthBetweenEqualCharacters(char * s)
{
    int i = -1;
    int j;
    int max;

    max = -1;
    while(s[++i])
    {
        j = i;
        while(s[++j])
            if (s[i] == s[j] && ((j - i - 1) > max))
                max = j - i - 1;
    }
    return max;
}
