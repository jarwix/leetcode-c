int subtractProductAndSum(int n)
{
    int temp;
    int mult;
    int sum;
    
    temp = n;
    mult = 1;
    sum = 0;
    while(n > 0)
    {
        mult *= n%10;
        sum += n%10;
        n = n/10;
    }
    return(mult - sum);
}
