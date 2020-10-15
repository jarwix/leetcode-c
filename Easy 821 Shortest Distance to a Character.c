/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shortestToChar(char * s, char C, int* returnSize)
{
    int *result;
    int i;
    int minE;
    int maxE;
    
    i = 0;    
    while(s[i])
        ++i;
    result = (int *)malloc(sizeof(int) * i);
    *returnSize = i;
    i = -1;
    while(s[++i])
    {
        if(s[i] == C)
            result[i] = 0;
        if(s[i] != C)
        {
            result[i] = -1;
            minE = i;
            maxE = i;
            while(result[i] == -1)
            {
                if (--minE >= 0 && s[minE] == C)
                        result[i] = i - minE;
                if (++maxE < *returnSize && s[maxE] == C)
                        result[i] = maxE - i;
            }
        }
    }
    return result;
}
