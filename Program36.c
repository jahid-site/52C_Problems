#include<stdio.h>
#include<string.h>
int main(){
    int T, N, i, j;
    char words[21][10001];
    char temp[10001];
    scanf("%d", &T);
    while(T--){
        scanf("%d", &N);
        for(i = 0;i < N;i++){
            scanf(" %s", &words[i]);
        }
        for(i = 0;i < N;i++){
            for(j = i;j < N;j++){
                if(strcmp(words[i],words[j]) > 0){
                    strcpy(temp, words[i]);
                    strcpy(words[i],words[j]);
                    strcpy(words[j],temp);
                }
            }
        }
        for(i = 0;i < N;i++){
            printf("%s\n", words[i]);
        }
    }
    return 0;
}
