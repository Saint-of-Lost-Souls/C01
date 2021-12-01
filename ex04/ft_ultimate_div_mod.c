#include <unistd.h>

#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{   
    
    *a = 22 / 7;
    *b = 22 % 7;
}

int main()
{
    int a;
    int b;

    ft_ultimate_div_mod(&a, &b);

    return 0;
}