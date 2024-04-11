// Link ; https://www.hackerrank.com/challenges/1d-arrays-in-c/problem?isFullScreen=true

# include <stdio.h>

int main (){
    int a;
    int sum = 0;
    scanf("%d", &a);
    int angka[a];

    for(int i =0 ; i < a; i++){
        scanf("%d", &angka[i]);
    }
    for (int i = 0; i < a ;i++){
        sum = sum + angka[i];
    }
    printf("%d", sum);
    return 0;
}
