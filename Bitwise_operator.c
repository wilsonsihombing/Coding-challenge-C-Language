// Link : https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem?isFullScreen=true

#include <stdio.h>

    void cek(int n, int k){
        int max_and = 0 ,max_or = 0, max_xor = 0;

       

        for (int i = 1 ; i <= n; i++ ){
            for ( int a = i + 1 ; a <= n; a++){
                int and_result = i & a;
                if (and_result > max_and && and_result < k ){
                    max_and = and_result;
                }
                int or_result = i | a;
                if (or_result > max_or && or_result < k){
                    max_or = or_result;
                }
                int xor_result = i ^ a;
                if(xor_result > max_xor && xor_result < k){
                    max_xor = xor_result;
                }   
            }
        }
        printf("%d\n%d\n%d", max_and,max_or,max_xor);
    }



    int main(){
        int n,k;
        scanf("%d %d", &n,&k);

        cek(n,k);
        
        return 0;
        

    }


    
