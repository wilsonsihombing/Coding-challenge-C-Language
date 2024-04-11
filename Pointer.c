// Link : https://www.hackerrank.com/challenges/pointer-in-c/problem?isFullScreen=true
#include <stdio.h>

int main(){
    int a,b;
    scanf ("%d%d", &a,&b);

    int sum = a + b;
    int selisih;
    if (a > b ){
        selisih = a - b;
    }else{
        selisih = b-a;
    }
    printf("%d\n%d", sum,selisih );


    return 0;

}
