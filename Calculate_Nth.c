//Link ; https://www.hackerrank.com/challenges/recursion-in-c/problem?isFullScreen=true

#include <stdio.h>



void cek(int angka[],int ulang){
    for (int i = 0 ; i < 3 ; i++){
        scanf("%d", &angka[i]);

    }
    for( int i = 3 ; i<ulang ;i++){
        
        angka[i] = angka[i-1] + angka[i-2] + angka [i-3];

    }
    printf("%d", angka[ulang-1]);

}

int main(){
    int ulang;
    scanf("%d", &ulang);
    int angka[ulang];

    cek(angka,ulang);


    return 0;

}
