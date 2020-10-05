/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize){
    int     i;
    int     j;
    int     count;
    int     *result;
    
    i = -1;
    result = malloc(sizeof(int) * numsSize);
    while(++i < numsSize)
    {
        j = -1;
        count = 0;
        while(++j < numsSize)
            if(nums[i] > nums[j] && i != j)
                ++count;
        result[i] = count;
    }
    *returnSize = i;
    return result;
}
