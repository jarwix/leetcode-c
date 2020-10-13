int maxProduct(int* nums, int numsSize)
{
    int     i;
    int     result;
    int     max;
    int     max1;
    
    i = -1;
    i = -1;
    max = 0;
    max1 = 0;
    while (++i < numsSize)
    {
        if (nums[i] >= max)
        {
            max1 = max;
            max = nums[i];
        }
        else if (nums[i] >= max1 && nums[i] <= max)
            max1 = nums[i];
    }
    return ((max-1) * (max1 - 1));
}
