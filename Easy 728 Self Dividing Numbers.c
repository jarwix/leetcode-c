/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize)
{
    int i;
    int temp;
    int count;
    int *result;
    
    i = left - 1;
    count = 0;
    while(++i <= right)
    {
        temp = i;
        while(temp > 0)
        {
            if ((temp % 10 == 0) || (i % (temp % 10) != 0))
                   break ;
            temp /= 10;
        }
        if (temp == 0)
               ++count;
    }
    *returnSize = count;
    result = (int *)malloc(sizeof(int) * count);
    i = left - 1;
    count = 0;
    while(++i <= right)
    {
        temp = i;
        while(temp > 0)
        {
                if ((temp % 10 == 0) || (i % (temp % 10) != 0))
                   break ;
            temp /= 10;
        }
        if (temp == 0)
            result[count++] = i;
    }
    return result;
}
