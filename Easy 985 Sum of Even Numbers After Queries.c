/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sumEvenAfterQueries(int* A, int ASize, int** queries, int queriesSize, int* queriesColSize, int* returnSize)
{
    int     j;
    int     i;
    int     sum_even;
    int     *result;
    
    result = (int *)malloc(sizeof(int) * ASize);
    *returnSize = ASize;
    j = -1;
    sum_even = 0;
    while(++j < queriesSize)
        if (A[j] % 2 == 0)
            sum_even += A[j];
    j = -1;
    while(++j < queriesSize)
    {
        A[queries[j][1]] += queries[j][0];
        if ((A[queries[j][1]] - queries[j][0]) % 2 == 0 && A[queries[j][1]] % 2 == 0)
            sum_even += queries[j][0];        
        else if((A[queries[j][1]] - queries[j][0]) % 2 != 0 && A[queries[j][1]] % 2 == 0)
            sum_even += A[queries[j][1]];
        else if((A[queries[j][1]] - queries[j][0]) % 2 == 0 && A[queries[j][1]] % 2 != 0)
            sum_even -= (A[queries[j][1]] - queries[j][0]);
        result[j] = sum_even;
    }
    return result;
}
