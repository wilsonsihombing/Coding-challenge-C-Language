//Link : https://www.hackerrank.com/challenges/for-loop-in-c/problem?isFullScreen=true

#include <stdio.h>

int main(){
    int a;
    int b;

    scanf("%d %d", &a,&b);
    
    for(int i = a; i <= b ; i++){
        if(i == 1){
            printf("one\n");
        }else if (i == 2){
            printf("two\n");
        } else if (i == 3){
            printf("three\n");
        } else if (i == 4){
            printf("four\n");
        } else if (i == 5){
            printf("five\n");
        } else if (i == 6){
            printf("six\n");
        } else if (i == 7){
            printf("seven\n");
        } else if (i == 8){
            printf("eight\n");
        } else if (i == 9){
            printf("nine\n");
        } else {
            
        }

       
    } 
    for ( int y = 10; y <= b ; y++){
        if(y%2 == 0){
            printf("even\n");
            }else if(y%2 == 1){
                printf("odd\n");
            }
            }
    
    
    return 0;
}
    



    

