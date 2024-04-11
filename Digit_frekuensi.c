// Link : https://www.hackerrank.com/challenges/frequency-of-digits-1/problem?isFullScreen=true

#include <stdio.h>
#include <string.h>
#include<ctype.h>

int main(){
    char inputan[1000];
   
    int sum0 = 0,sum1 = 0,sum2 = 0,sum3 = 0,sum4 = 0,sum5 = 0,sum6 = 0,sum7 = 0,sum8 = 0,sum9 = 0;
    fgets(inputan,1000,stdin);

    int lenght = strlen(inputan);

    for(int i = 0; i < lenght; i++){
        if (isdigit(inputan[i])){
            
            switch (inputan[i]){
                case '0':
                sum0 = sum0 + 1;
                break;

                case '1':
                sum1 = sum1 + 1;
                break;

                case '2':
                sum2 = sum2 + 1;
                break;

                case '3':
                sum3 = sum3 + 1;
                break;

                case '4':
                sum4 = sum4 + 1;
                break;

                case '5':
                sum5 = sum5 + 1;
                break;

                case '6':
                sum6 = sum6 + 1;
                break;

                case '7':
                sum7 = sum7 + 1;
                break;

                case '8':
                sum8 = sum8 + 1;
                break;

                case '9':
                sum9 = sum9 + 1;
                break;
            }
            
        
        } 
    }
    printf("%d %d %d %d %d %d %d %d %d %d", sum0,sum1,sum2,sum3,sum4,sum5,sum6,sum7,sum8,sum9);


    return 0;
}
