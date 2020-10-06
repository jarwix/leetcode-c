char * restoreString(char * s, int* indices, int indicesSize)
{
    char    *result;
    int     i;
    
    result = (char *)malloc(sizeof(char) * (indicesSize + 1));
    result[indicesSize] = '\0';
    i = -1;
    while(++i < indicesSize)
        result[indices[i]] = s[i];
    return result;
}
