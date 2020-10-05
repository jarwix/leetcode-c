int numJewelsInStones(char * J, char * S)
{
    int i;
    int j;
    int count;
    
    i = -1;
    count = 0;
    while(J[++i])
    {
        j = -1;
        while(S[++j])
        {
            if (J[i] == S[j])
                count++;
        }
    }
    return count;
}
