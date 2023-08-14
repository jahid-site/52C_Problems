#include<stdio.h>
int main(){
    int T;
    char S[101];
    scanf("%d ", &T);
    while(T--){
        gets(S);
        for(int i = 0;S[i] != '\0';i++){
            printf("%d", (S[i] - 'A') + 1);
        }
        printf("\n");
    }
    return 0;
}
