/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize)
{
    bool    *result;
    int     i;
    int     maxCan;
    
    result = (bool *)malloc(sizeof(bool) * candiesSize);
    i = 0;
    maxCan = 0;
    while(i < candiesSize)
    {
        if(candies[i] > maxCan)
            maxCan = candies[i];
        i++;
    }
    i = 0;
    while(i < candiesSize)
    {
        if (maxCan > (candies[i] + extraCandies))
            result[i] = false;
        else
            result[i] = true;
        i++;
    }
    *returnSize = i; 
    return result;
}
