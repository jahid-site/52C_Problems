#include<stdio.h>
int main(){
    int T, count;
    char S[10001];
    scanf("%d ", &T);
    while(T--){
        count = 0;
        gets(S);
        for(int i = 0;S[i] != '\0';i++){
            if(S[i] == ' '){
                count++;
            }
        }
        printf("Count = %d\n", count + 1);
    }
    return 0;
}
