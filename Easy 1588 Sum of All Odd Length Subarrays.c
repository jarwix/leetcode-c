int sumOddLengthSubarrays(int* arr, int arrSize)
{
    int i;
    int j;
    int k;
    int limit;
    int maxarr;
    int max;
    int count;
    
    if (arrSize%2 == 0)
        maxarr = arrSize;
    else
        maxarr = arrSize + 1;
    i = -1;
    limit = -2;
    count = 0;
    while (++i < (maxarr/2))
    {
        limit += 2;
        j = -1;
        while(++j < arrSize - limit)
        {
            k = j;
            max = limit + 2;
            while (--max > 0)
                count += arr[k++];
        }
    }
    return count;
}
