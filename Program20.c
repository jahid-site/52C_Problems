#include<stdio.h>
int main(){
    int T, count, b;
    char S[10001];
    scanf("%d ", &T);
    while(T--){
        count = 0;
        gets(S);
        for(int i = 0;S[i] != '\0';i++){
            if((S[i] >= 'a' && S[i] <= 'z') || (S[i] >= 'A' && S[i] <= 'Z')){
                b = 1;
            } else {
                if(b == 1)
                    count++;
                    b = -1;
            }
        }
        printf("Count = %d\n", count + 1);
    }
    return 0;
}
