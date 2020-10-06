int numIdenticalPairs(int* nums, int numsSize)
{
    int     i;
    int     j;
    int     count;
    
    i = -1;
    count = 0;
    while(++i < numsSize)
    {
        j = -1;
        while(++j < numsSize)
        {
            if (i < j && nums[i] == nums[j])
                count++;
        }
    }
    return count;
}
