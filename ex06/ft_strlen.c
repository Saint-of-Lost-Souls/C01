#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    while(str[i] != '\0')
    {        
        i++;        
    }  
    return (i);    
}

int main()
{   
    int length;   

    length = ft_strlen("the cake is a lie");   
    printf("the length of the string is: %d", length); 

    return 0;
}