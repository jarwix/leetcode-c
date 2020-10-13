/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParityII(int* A, int ASize, int* returnSize)
{
    int     i;
    int     odd;
    int     even;
    int     *result;
    
    i = -1;
    even = 0;
    odd = 1;
    result = (int *)malloc(sizeof(int) * ASize);
    while (++i < ASize)
    {
        if (A[i] % 2 == 0)
        {
            result[even] = A[i];
            even += 2;
        }
        else
        {
            result[odd] = A[i];
            odd += 2;
        }
    }
    *returnSize = ASize;
    return result;
}
