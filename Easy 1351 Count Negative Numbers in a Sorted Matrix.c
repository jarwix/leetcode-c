

int countNegatives(int** grid, int gridSize, int* gridColSize)
{
    int result;
    int i;
    int j;
    
    i = -1;
    result = 0;
    while(++i < gridSize)
    {
        j = -1;
        while(++j < gridColSize[i])
            if(grid[i][j] < 0)
                result++;
    }
    return result;
}
