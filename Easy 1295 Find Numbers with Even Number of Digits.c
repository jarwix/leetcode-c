int findNumbers(int* nums, int numsSize)
{
    int i;
    int count;
    int result;
    
    i = -1;
    result = 0;
    while(++i < numsSize)
    {
        count = 0;
        while(nums[i] > 0)
        {
            nums[i] /= 10;
            ++count;
        }
        if (count % 2 == 0)
            ++result;
    }
    return result;
}
