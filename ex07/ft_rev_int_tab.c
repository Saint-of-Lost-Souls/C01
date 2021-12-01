#include <unistd.h>
#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
    
    while(tab[size])
    {        
        size--;        
    } 
    printf("The array backwards is: %d", tab[size]);
}

int main()
{   
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    int tab;
    ft_rev_int_tab(&tab, 10);    

    return 0;
}