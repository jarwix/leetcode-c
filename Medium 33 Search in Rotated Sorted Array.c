int search(int* nums, int numsSize, int target)
{
    int i = -1;
    
    while(++i < numsSize)
    {
        if (nums[i] == target)
            return i;
    }
    return -1;
}
