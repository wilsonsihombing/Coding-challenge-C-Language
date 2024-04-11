// Link ; https://www.hackerrank.com/challenges/reverse-array-c/problem?isFullScreen=true

#include <stdio.h>

int main(){
    int a;
    
    scanf("%d", &a);
    int angka[a];

    for(int i =0 ; i < a; i++){
        scanf("%d", &angka[i]);
    }
    for (int i = a-1; i >= 0 ;i--){
    
        printf("%d ", angka[i]);
    }
    
    return 0;
}
