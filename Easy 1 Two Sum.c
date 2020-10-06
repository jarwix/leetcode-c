/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int i;
    int j;
    int *result;
    
    result = malloc(sizeof(int) * 2);
    i = -1;
    while(++i < numsSize)
    {
        j = -1;
        while (++j < numsSize)
        {
              if ((target == (nums[i] + nums[j])) && i != j)
                  {
                      *returnSize = 2;
                      result[0] = i;
                      result[1] = j;
                      return result;
                  }
        }
        
    }
   return result;
}
