#include<stdio.h>
int main(){
    int T, len, i, j;
    char word[1001];
    scanf("%d", &T);
    while(T--){
        scanf(" %s", word);
        len = 0;
        while(word[len] != '\0'){
            len++;
        }
        for(i = 0, j = len - 1;i < len/2;i++,j--){
            if(word[i] != word[j]){
                printf("Sorry! It is not palindrome!\n");
                i = -1;
                break;
            }
        }
        if(i != -1){
            printf("Yes! It is palindrome!\n");
        }
    }
    return 0;
}
