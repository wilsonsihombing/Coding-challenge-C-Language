// Link : https://www.hackerrank.com/challenges/sum-numbers-c/problem?isFullScreen=true
#include <stdio.h>


int main()
{   
    int a,b,jumlah1,selisih1;
    float c,d,jumlah2,selisih2;
    
    jumlah1 = 0;
    jumlah2 = 0;
    selisih1 = 0;
    selisih2 = 0;
    
    scanf("%d %d", &a,&b);
    scanf("%f %f", &c,&d);
    
    jumlah1 = a + b;
    selisih1 = a - b;
    jumlah2 = c + d ;
    selisih2 = c - d;
    
    printf("%d %d\n", jumlah1,selisih1);
    printf("%.1f %.1f\n", jumlah2, selisih2);
	
    
    return 0;
}
