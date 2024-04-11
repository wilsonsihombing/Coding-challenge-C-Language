// Link : https://www.hackerrank.com/challenges/hello-world-c/problem?isFullScreen=true

#include <stdio.h>
#include<string.h>


int main() 
{
    
    char kata[100];
    scanf("%[^\n]%*c", kata);

    printf("Hello, World!\n");
    printf("%s", kata);
      
    return 0; 
} 
