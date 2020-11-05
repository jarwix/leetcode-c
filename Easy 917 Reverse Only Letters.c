char * reverseOnlyLetters(char * S)
{
    char c;
    int i = -1;
    int j = strlen(S) + 1;
    while(S[++i])
            if (S[i] >= 'a' && S[i] <= 'z' || S[i] >= 'A' && S[i] <= 'Z')
                while(--j >= i)
                    if (S[j] >= 'a' && S[j] <= 'z' || S[j] >= 'A' && S[j] <= 'Z')
                    {
                        c = S[i];
                        S[i] = S[j];
                        S[j] = c;
                        break ;
                    }
    return S;
}
