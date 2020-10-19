int diagonalSum(int** mat, int matSize, int* matColSize)
{
    int     i;
    int     j;
    int     count;
    
    i = -1;
    count = 0;
    while(++i < matSize)
        count+= mat[i][i];
    i = -1;
    j = matColSize[0];
    while(++i < matSize && --j > -1)
        count += mat[i][j];
    if (matSize % 2 == 1)
        count -= mat[(matSize/2)][(matSize/2)];
    return count;
}
