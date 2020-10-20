int repeatedNTimes(int* A, int ASize)
{
    int i;
    int j;
    
    i = -1;
    while(++i < ASize)
    {
        j = -1;
        while(++j < ASize)
            if (i != j && A[i] == A[j])
                return A[i];
    }
    return A[0];
}
