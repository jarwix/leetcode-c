bool canMakeArithmeticProgression(int* arr, int arrSize)
{
    int i;
    int j;
    int c;
    
    i = -1;
    while(++i < arrSize)
    {
        j = 0;
        while(++j < arrSize - i)
        {
            if(arr[j] > arr[j - 1])
            {
                c = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = c;
            }   
        }
    }
    c = arr[1] - arr[0];
    i = 0;
    while(++i < arrSize)
        if(arr[i] - arr[i-1] != c)
            return false;
    return true;
}
