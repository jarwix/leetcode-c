int findSpecialInteger(int* arr, int arrSize)
{
    int i = -1;
    int count = 1;
    
    while(++i < arrSize)
    {
        if ((i != 0) && (arr[i] == arr[i-1]))
        {
            ++count;
            if (count > arrSize/4)
                return arr[i];
        }
        if ((i != 0) && (arr[i] != arr[i-1]))
            count = 1;
    }
    return arr[0];
}
