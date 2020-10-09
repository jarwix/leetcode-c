bool isPalindrome(int x)
{
    int     i;
    int     count;
    int     last;
    int     *numbers;
    
    last = x;
    count = 0;
    if (last < 0)
        return false;
    else
    {
        if (last == 0)
            return true;
        while (last > 0)
        {
            last = last/10;
            count++;
        }
    }
    numbers = (int *)malloc(sizeof(int) * count);
    i = -1;
    last = x;
   
    while (last > 0)
    {
        numbers[++i] = last%10;
        last /= 10;
    }
    i = -1;
    while(++i < count/2)
        if (numbers[i] != numbers[count-i-1])
            return false;
    return true;
}
