/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* minSubsequence(int* nums, int numsSize, int* returnSize)
{
    int i;
    int j;
    int temp;
    int sum;
    int max_sum;
    int *result;
    
    i = -1;
    sum = 0;
    while(++i < numsSize)
        sum += nums[i];
    i = -1;
    while(++i < numsSize)
    {
        j = -1;
        while(++j < numsSize - 1)
            if (nums[j] < nums[j + 1])
            {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
    }
    max_sum = 0;
    i = -1;
    while ((sum - max_sum) >= max_sum)
        max_sum += nums[++i];
    result = (int *)malloc(sizeof(int) * (i+1));
    j = -1;
    *returnSize = i+1;
    while (++j < i + 1)
        result[j] = nums[j];
    return result;
}
