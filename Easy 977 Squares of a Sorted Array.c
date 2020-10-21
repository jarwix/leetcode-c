/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* A, int ASize, int* returnSize)
{
    int     i;
    int     j;
    int     c;
    
    i = -1;
    *returnSize = ASize;
    while(++i < ASize)
    {
        j = -1;
        while(++j < ASize - i - 1)
        {
            if(abs(A[j]) > abs(A[j + 1]))
            {
                c = A[j];
                A[j] = A[j + 1];
                A[j + 1] = c;
            }
        }
    }
    i = -1;
    while(++i < ASize)
        A[i] *= A[i];
    return A;
}
