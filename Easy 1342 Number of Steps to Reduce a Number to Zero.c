int numberOfSteps (int num)
{
    int count;
    
    count = 0;
    while(num != 0)
    {
       if (num % 2 != 0)
          num--;
       else
          num = num/2;
        count++;
    }
    return count;
}
