double average(int* salary, int salarySize)
{
    int i;
    int min;
    int max;
    int sum;
    
    i = 0;
    min = salary[0];
    max = salary[0];
    sum = salary[0];
    while(++i < salarySize)
    {
        sum += salary[i];
        if (salary[i] > max)
            max = salary[i];
        if (salary[i] < min)
            min = salary[i];
    }
    return (double)(((double)sum - (double)min - (double)max)/((double)salarySize - 2));
}
