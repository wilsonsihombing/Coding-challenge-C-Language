//Link  : https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/final-destination-cakewalk/

#include <stdio.h>
 
int main() {
    char commands[100005]; // Maksimal panjang string perintah
    int x = 0, y = 0; // Awalnya berada di (0, 0)
 
    // Membaca input string perintah
    scanf("%s", commands);
 
    // Menghitung lokasi akhir berdasarkan perintah
    for (int i = 0; commands[i] != '\0'; i++) {
        if (commands[i] == 'L') {
            x--;
        } else if (commands[i] == 'R') {
            x++;
        } else if (commands[i] == 'U') {
            y++;
        } else if (commands[i] == 'D') {
            y--;
        }
    }
 
    // Mencetak lokasi akhir
    printf("%d %d\n", x, y);
 
    return 0;
}