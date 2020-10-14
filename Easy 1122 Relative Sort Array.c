/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* relativeSortArray(int* arr1, int arr1Size, int* arr2, int arr2Size, int* returnSize)
{
    int i;
    int j;
    int count;
    int count_start;
    int flag;
    int *result;
    
    i = -1;
    result = (int *)malloc(sizeof(int) * arr1Size);
    count = 0;
    while(++i < arr2Size)
    {
        j = -1;
        while(++j < arr1Size)
            if (arr2[i] == arr1[j])
                result[count++] = arr2[i];        
    }
    count_start = count;
    *returnSize = arr1Size;
    j = -1;
    while(++j < arr1Size)
    {
        i = -1;
        flag = 0;
        while(++i < arr2Size)
            if (arr1[j] == arr2[i])
            {
                flag = 1;
                break ;
            }
        if (flag == 0)
            result[count++] = arr1[j];
    }
    count = count_start - 1;
    while(++count < arr1Size - 1)
    {
        j = count_start - 1;
        while(++j < arr1Size - 1)
            if (result[j] > result[j + 1])
            {
                flag = result[j];
                result[j] = result[j + 1];
                result[j + 1] = flag;
            }
    }
    return result;
}
