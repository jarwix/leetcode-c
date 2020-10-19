int minTimeToVisitAllPoints(int** points, int pointsSize, int* pointsColSize)
{
    int i;
    int count;
    
    i = 1;
    count = 0;
    while (i < pointsSize)
    {
        if (points[i][0] > points[i - 1][0])
        {
            if (points[i][1] > points[i - 1][1])
            {
                ++points[i - 1][0];
                ++points[i - 1][1];
            }
            else if (points[i][1] < points[i - 1][1])
            {
                ++points[i - 1][0];
                --points[i - 1][1];
            }
            else if (points[i][1] == points[i - 1][1])
                ++points[i - 1][0];
            ++count;
        }
        if (points[i][0] < points[i - 1][0])
        {
            if (points[i][1] > points[i - 1][1])
            {
                --points[i - 1][0];
                ++points[i - 1][1];
            }
            else if (points[i][1] < points[i - 1][1])
            {
                --points[i - 1][0];
                --points[i - 1][1];
            }
            else if (points[i][1] == points[i - 1][1])
                --points[i - 1][0];
            ++count;
        }
        if (points[i][0] == points[i - 1][0])
        {
            if (points[i][1] > points[i - 1][1])
                ++points[i - 1][1];
            else if (points[i][1] < points[i - 1][1])
                --points[i - 1][1];
            else if (points[i][1] == points[i - 1][1])
            {
                ++i;
                --count;
            }
            ++count;
        }
    }
    return count;
}
