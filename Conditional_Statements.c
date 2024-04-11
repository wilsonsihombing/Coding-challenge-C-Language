//Link ; https://www.hackerrank.com/challenges/conditional-statements-in-c/problem?isFullScreen=true

#include <stdio.h>

int main()
{
    int angka;
    

    scanf("%i", &angka);
    
    if(angka > 9){
        printf("Greater than 9");
    }else if(angka == 9){
        printf("nine");
    }else if(angka == 8){
        printf("eight");
    }else if(angka == 7){
        printf("seven");
    }else if(angka == 6){
        printf("six");
    }else if(angka == 5){
        printf("five");
    }else if(angka == 4){
        printf("four");
    }else if(angka == 3){
        printf("three");
    }else if(angka == 2){
        printf("two");
    }else if(angka == 1){
        printf("one");
    }else{

    }


    return 0;

}
