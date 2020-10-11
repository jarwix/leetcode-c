int minFlips(char * target)
{
    int i = -1;
    int count = 0;
    
    char prev = '0';
    while(target[++i])
        if (prev != target[i])
        {
            prev = target[i];
            ++count;
        }
    return count;
}
