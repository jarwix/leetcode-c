
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sumZero(int n, int* returnSize)
{
    int i;
    int *result;
    
    result = malloc(sizeof(int) * n);
    i = -1;
    while(++i < n)
    {
        if (n%2 == 1 && i < n/2)
            result[i] = -n/2 + i;
        else if (n%2 == 1 && i == n/2)
            result[i] = 0;
        else if (n%2 == 1 && i > n/2)
            result[i] = n - i;
        else if (n%2 == 0 && i < n/2)
            result[i] = -n/2 + i;
        else if (n%2 == 0 && i >= n/2)
            result[i] = n - i;
    }
    *returnSize = n;
    return result;
}
