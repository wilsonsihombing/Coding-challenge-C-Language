//Link ; https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/warcakewalk/

#include <stdio.h>
 
int main() {
    int T;
    scanf("%d", &T);
 
    while (T--) {
        int N;
        scanf("%d", &N);
 
        int bobStrength[N], aliceStrength[N];
        
        for (int i = 0; i < N; i++) {
            scanf("%d", &bobStrength[i]);
        }
 
        for (int i = 0; i < N; i++) {
            scanf("%d", &aliceStrength[i]);
        }
 
        int bobMaxStrength = bobStrength[0];
        int aliceMaxStrength = aliceStrength[0];
 
        for (int i = 1; i < N; i++) {
            if (bobStrength[i] > bobMaxStrength) {
                bobMaxStrength = bobStrength[i];
            }
 
            if (aliceStrength[i] > aliceMaxStrength) {
                aliceMaxStrength = aliceStrength[i];
            }
        }
 
        if (bobMaxStrength == aliceMaxStrength) {
            printf("Tie\n");
        } else if (bobMaxStrength > aliceMaxStrength) {
            printf("Bob\n");
        } else {
            printf("Alice\n");
        }
    }
 
    return 0;
}