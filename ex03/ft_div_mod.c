#include <unistd.h>

#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{   
    *div = a / b;
    *mod = a % b;
}

int main()
{
    int a = 5;
    int b = 3;
    int c;
    int d;

    ft_div_mod(a, b, &c, &d);

    printf("a / b = %d, the remainder is = %d", c, d);
    return 0;
}