//Link:https://www.hackerearth.com/problem/algorithm/find-factorial/?source=list_view

#include <stdio.h>
int total(int angka);
int main(){
    int angka;
    int hasil = 0;
    scanf("%d", &angka);
 
    hasil = total(angka);
    printf("%d", hasil);
    return 0;
}
 
int total(int angka){
    int nilai = 0;
    for(int i = angka ; i > 1  ; i--){
        if(i == angka){
            nilai = nilai + (i * (i-1));
        }else{
            nilai = nilai * (i-1);
        }
    }
    return nilai;
}