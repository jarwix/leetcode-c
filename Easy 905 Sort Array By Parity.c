/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* A, int ASize, int* returnSize)
{
    int i;
    int j;
    int *result;
    
    i = -1;
    j = 0;
    *returnSize = ASize;
    result = (int *)malloc(sizeof(int) * ASize);
    while (++i < ASize)
        if (A[i] % 2 == 0)
            result[j++] = A[i];
    i = -1;
    while (++i < ASize)
        if (A[i] % 2 == 1)
            result[j++] = A[i];
    return result;
}
