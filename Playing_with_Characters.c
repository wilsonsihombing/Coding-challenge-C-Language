// link : https://www.hackerrank.com/challenges/playing-with-characters/problem?isFullScreen=true

#include <stdio.h>
#include <string.h>


int main() 
{
    
    char karakter;
    char kata[100];
    char kalimat[100];
    
    scanf("%c", &karakter);
    scanf("%s", &kata);
    scanf(" %[^\n]s", &kalimat);
    
    printf("%c\n", karakter);
    printf("%s\n", kata);
    printf("%s\n", kalimat);
    
    return 0;
}