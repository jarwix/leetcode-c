/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* runningSum(int* nums, int numsSize, int* returnSize)
{
    int i;
    int count;
    int *result;
    
    count = 0;
    i = 0;
    result = (int *)malloc(sizeof(int) * numsSize);
    i = 0;
    while(numsSize > 0)
    {
        if (i == 0)
            result[i] = nums[i];
        else
            result[i] = nums[i] + result[i-1];
        i++;
        numsSize--;
    }
    *returnSize = i;
    return (result);    
}
