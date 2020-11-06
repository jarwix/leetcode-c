int findMaxConsecutiveOnes(int* nums, int numsSize)
{
    int max = 0;
    int i = -1;
    int count = 0;
    
    while(++i < numsSize)
    {
        if (nums[i] != 1)
            count = 0;
        else
            ++count;
        if (count > max)
            max = count;
    }
    return max;
}
