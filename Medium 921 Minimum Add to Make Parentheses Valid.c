int minAddToMakeValid(char * S)
{
    int i = -1;
    int rcount = 0;
    int lcount = 0;
    while(S[++i])
    {   
        if (S[i] == '(')
                ++lcount;    
        else if (S[i] == ')')
            if (lcount > 0)
                --lcount;
            else
                ++rcount;
    }
    return lcount + rcount;
}
