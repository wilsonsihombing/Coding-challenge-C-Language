// link : https://www.hackerrank.com/challenges/printing-pattern-2/problem?isFullScreen=true

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[2 * n - 1][2 * n - 1];
    int i, j, t, min;

    for (t = 0; t < n; t++) {
        for (i = t; i < 2 * n - t - 1; i++) {
            for (j = t; j < 2 * n - t - 1; j++) {
                min = t;
                if (i < min) {
                    min = i;
                }
                if (j < min) {
                    min = j;
                }
                if (2 * n - i - 2 < min) {
                    min = 2 * n - i - 2;
                }
                if (2 * n - j - 2 < min) {
                    min = 2 * n - j - 2;
                }
                arr[i][j] = n - min;
            }
        }
    }

    for (i = 0; i < 2 * n - 1; i++) {
        for (j = 0; j < 2 * n - 1; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
