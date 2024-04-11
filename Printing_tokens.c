// Link ; https://www.hackerrank.com/challenges/printing-tokens-/problem?isFullScreen=true

#include <stdio.h>
#include <string.h>


int main(){
    char inputan[1000];
    char *token;

    //fgets(inputan,100,stdin);
    scanf("%[^\n]", inputan);

    token = strtok(inputan, " ");

    while(token != NULL){
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }


    return 0;
}
