int numTeams(int* rating, int ratingSize)
{
    int count = 0;
    int i = -1;
    int j;
    int k;
    
    while(++i < ratingSize - 2)
    {
        j = i;
        while(++j < ratingSize - 1)
        {
            k = j;
            while(++k < ratingSize)
            {
                if (i < j && j < k && ((rating[i] < rating[j] && rating[j] < rating[k]) || (rating[i] > rating[j] && rating[j] > rating[k])))
                    ++count;
            }
        }
    }
    return count;
}
