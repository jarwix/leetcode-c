/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize)
{
    int     i;
    int     *result;
    
    i = -1;
    result = malloc(sizeof(int) * numsSize);
    while(++i < n)
    {
        result[i * 2] = nums[i];
        result[i * 2 + 1] = nums[n + i];
    }
    *returnSize = numsSize;
    return result;
}
