#include<stdio.h>
int main(){
    int T, len;
    char word[1001];
    scanf("%d ", &T);
    while(T--){
        gets(word);
        len = 0;
        while(word[len] != '\0'){
            len++;
        }
        while(len--){
            printf("%c", word[len]);
        }
        printf("\n");
    }
    return 0;
}
