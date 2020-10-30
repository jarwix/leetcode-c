bool hasAlternatingBits(int n)
{
    char flag = '2';
    
    while(n > 0)
    {
        if (flag == '2')
        {
            if (n % 2 == 0)
                flag = '0';
            else
                flag = '1';
        }
        else if (n % 2 == 0 && flag == '1')
            flag = '0';
        else if (n % 2 == 1 && flag == '0')
            flag = '1';
        else
            return false;
        n /= 2;
    }
    return true;
}
