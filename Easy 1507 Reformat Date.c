char * reformatDate(char * date)
{
    char *result;
    int i = 0;
    int j = -1;
    char month[12][3] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    result = malloc(sizeof(char) * 11);
    result[4] = '-';
    result[7] = '-';
    if(date[1] >= '0' && date[1] <= '9')
    {
        result[8] = date[0];
        result[9] = date[1];
    }
    else
    {
        result[8] = '0';
        result[9] = date[0];
    }
    while(date[i] != ' ')
        ++i;
    ++i;
    while(date[i] != ' ')
        ++i;
    while(++j < 12)
        if (month[j][0] == date[i-3] && month[j][1] == date[i-2]
            && month[j][2] == date[i-1])
        {
            if (++j < 10)
                result[5] = '0';
            else
                result[5] = '1';
            result[6] = j%10 + '0';
            break ;
        }
    j = 0;
    while(date[++i])
        result[j++] = date[i];
    result[10] = '\0';
    return result;
}
