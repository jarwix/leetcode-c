void moveZeroes(int* nums, int numsSize)
{
    int i;
    int j;
    int count;
    
    i = -1;
    count = 0;
    j = 1;
    while (++i < numsSize)
        if (nums[i] != 0)
            nums[count++] = nums[i];
        else
            ++j;
    while(--j)
        nums[--numsSize] = 0;
}
