#include<stdio.h>
void print_reverse(char word[],int l){
    while(l--){
        printf("%c", word[l]);
    }
}
int main(){
    int T, i, k;
    char S[1002];
    char word[1002];
    scanf("%d", &T);
    while(T--){
        gets(S);
        for(i = 0, k = 0;S[i] != '\0';i++){
            if(S[i] != ' '){
                word[k] = S[i];
                k++;
            } else if (k > 0) {
                word[k] = '\0';
                print_reverse(word,k+1);
                k = 0;
            }
            if(k > 0){
                word[k] = '\0';
                print_reverse(word,k);
            }
        }
    }
    return 0;
}
