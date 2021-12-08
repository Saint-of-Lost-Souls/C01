#include <stdio.h>

int ft_strlen(char *str)
{
    int count;

    while(str[count] != '\0')
    {        
        count++;        
    }  
    return count;    
}

int main()
{   
    int length;
    char string[] = "Kill me now";

    length = ft_strlen(string);   
    printf("the length of the string is: %d", length); 

    return 0;
}