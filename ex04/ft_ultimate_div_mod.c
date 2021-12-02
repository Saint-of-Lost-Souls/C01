#include <unistd.h>

#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{   
    int temp_1;
    int temp_2;

    temp_1 = *a / *b;
    temp_2 = *a % *b;
    *a = temp_1;
    *b = temp_2;
    
    
    }

int main()
{
    int a = 22;
    int b = 7;

    ft_ultimate_div_mod(&a, &b);
    
    printf("a / b: %d, and the remainder is: %d", a, b);

    return 0;
}