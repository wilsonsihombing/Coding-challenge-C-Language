// Link : https://www.hackerrank.com/challenges/functions-in-c/problem?isFullScreen=true
#include <stdio.h>

void pencarian(int angka[], int terbesar )
{
    
    for(int i = 1; i < 4; i++){
        scanf ("%d", &angka[i]);
        if (terbesar > angka[i]){

        }else{
            terbesar = angka[i];
        }
       
    }
    printf("%d", terbesar);
    
}



int main(){
    int angka[4];
    
    scanf ("%d", &angka[0]);
    int terbesar = angka[0];
    pencarian( angka,  terbesar);

    return 0;
}
