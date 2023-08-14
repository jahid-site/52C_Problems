#include<stdio.h>
int main(){
    int T, i;
    char S[1001];
    int count[26];
    scanf("%d", &T);
    while(T--){
        scanf("%s", &S);
        for(i = 0;i < 26;i++){
            count[i] = 0;
        }
        for(i = 0;S[i] != '\0';i++){
            if(S[i] >= 'a' && S[i] <= 'z'){
                count[S[i]-'a']++;
            }
        }
        for(i = 0;i < 26;i++){
            if(count[i] != 0){
                printf("%c = %d\n", 'a' + i,count[i]);
            }
        }
    }
    return 0;
}
