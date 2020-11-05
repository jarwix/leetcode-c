bool detectCapitalUse(char * word)
{
    int i = strlen(word);
    int flag = 0;

    if (i == 0)
        return false;
    if (word[i-1] >= 'A' && word[i-1] <= 'Z')
        flag = 1;
    while(--i >= 0 && word[i])
    {
        if (flag == 1 && word[i] >= 'a' && word[i] <= 'z')
                return false;
        else if (flag == 0 && i != 0 && word[i] >= 'A' && word[i] <= 'Z')
                return false;
    }
    return true;
}
