int countGoodTriplets(int* arr, int arrSize, int a, int b, int c)
{
    int i;
    int j;
    int k;
    int count;
    
    i = -1;
    count = 0;
    while(++i < arrSize)
    {
        j = i;
        while (++j < arrSize)
        {
            if (abs(arr[i] - arr[j]) <= a)
            {
                k = j;
                while(++k < arrSize)
                    if (abs(arr[j] - arr[k]) <= b && abs(arr[k] - arr[i]) <= c)
                            ++count;
            }
            
        }
    }
    return count;
}
