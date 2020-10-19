/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* replaceElements(int* arr, int arrSize, int* returnSize)
{
    int max;
    int *result;
    
    result = (int *)malloc(sizeof(int) * arrSize);
    *returnSize = arrSize;
    max = -1;
    while(--arrSize > -1)
    {
        result[arrSize] = max;
        if (max < arr[arrSize])
            max = arr[arrSize];
    }
    return result;
}
