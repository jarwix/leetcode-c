int removeDuplicates(int* nums, int numsSize)
{
    int i;
    int returnNum;

    i = 0;
    if (numsSize != 0)
        returnNum = 1;
    else
        returnNum = 0;
    while(++i < numsSize)
    {
        if(nums[i] != nums[i - 1])
        {
            ++returnNum;
            nums[returnNum - 1] = nums[i];
        }
    }
    return returnNum;
}
