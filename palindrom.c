//Link : https://www.hackerearth.com/problem/algorithm/palindrome-check-2/?source=list_view

#include <stdio.h>
#include <string.h>
 
int ispalindrom(char *word);
int main(){
    char str[100];
    scanf("%s", &str);
 
    if(ispalindrom(str)){
        printf("YES");
    }else{
        printf("NO");
    }
 
    return 0;
}
 
int ispalindrom(char *word){
    int left = 0, right = strlen(word) - 1;
    while(left < right){
        if(word[left] != word[right]){
            return 0;
        }
        left++;
        right--;
    }
    return 1;
 
 
 
}