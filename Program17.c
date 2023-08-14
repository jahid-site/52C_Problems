#include<stdio.h>
int main(){
    int T, count;
    char S[1001];
    scanf("%d ", &T);
    while(T--){
        count = 0;
        gets(S);
        for(int i = 0;S[i] != '\0';i++){
            if(S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u'){
                count++;
            }
        }
        printf("Number of vowels = %d\n", count);
    }
    return 0;
}
