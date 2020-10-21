int peakIndexInMountainArray(int* arr, int arrSize)
{
    int i;
    int mountainPeak_i;
    
    i = 0;
    while(++i < arrSize)
    {
        if (arr[i] > arr[i-1])
            mountainPeak_i = i;
        else if (arr[i] < arr[i-1])
            break ;
    }
    return mountainPeak_i;
}
