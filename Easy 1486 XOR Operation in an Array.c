int xorOperation(int n, int start)
{
    int i = start;
    
    while(--n > 0)
        i ^= (start += 2);
    return i;
}
