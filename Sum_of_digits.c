// Link : https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem?isFullScreen=true

#include <stdio.h>

int main()
{
    int angka,jumlah;
    int karakter[5];
    scanf("%d", &angka);


    for(int i = 0; i < 5; i++){
        karakter[i] = angka % 10;
        angka = angka / 10;
        jumlah = jumlah + karakter [i];
    }
    printf("%d", jumlah);
    return 0;
}
