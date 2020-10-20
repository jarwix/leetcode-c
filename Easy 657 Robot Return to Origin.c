bool judgeCircle(char * moves)
{
    int i = -1;
    int rlCount = 0;
    int udCount = 0;

    while (moves[++i])
    {
        if(moves[i] == 'R')
            ++rlCount;
        if(moves[i] == 'L')
            --rlCount;
        if(moves[i] == 'U')
            ++udCount;
        if(moves[i] == 'D')
            --udCount;
    }
    if (rlCount == 0 && udCount == 0)
        return true;
    else
        return false;
}
