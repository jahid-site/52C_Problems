#include<stdio.h>
int main(){
    int T, i, c, v;
    char S[101], consonents[100], vowels[101];
    scanf("%d ", &T);
    while(T--){
        gets(S);
        for(i = 0, v = 0, c = 0;S[i] != '\0';i++){
            if(S[i] == ' '){
                continue;
            }
            if(S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u'){
                vowels[v] = S[i];
                v++;
            } else {
                consonents[c] = S[i];
                c++;
            }
        }
        consonents[c] = '\0';
        vowels[v] = '\0';
        printf("%s\n%s\n", vowels, consonents);
    }
    return 0;
}
