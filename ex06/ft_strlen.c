#include <unistd.h>
#include <string.h>
#include <stdio.h>

void    ft_strlen(char *str)
{
    int count;

    while(str[count] != '\0')
    {        
        count++;        
    }  
    
}

int main()
{   
    char string[] = "Kill me now";

    ft_strlen(string);    

    return 0;
}