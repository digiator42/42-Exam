
unsigned char reverse_bits(unsigned char octet)
{
    int	i = 256;
    char tab[8];
    int j = 0;
    
    while(i >>= 1){
        if(octet & i)
            tab[j] ='1' ;
        else
            tab[j] = '0';
        j++;
    }
    j = 8;
    while(--j >= 0)
        write(1, &tab[j], 1);
        
        
}
