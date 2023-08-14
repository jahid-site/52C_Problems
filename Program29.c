#include<stdio.h>
int main(){
    int T;
    char ch;
    scanf("%d ", &T);
    while(T--){
        scanf(" %c", &ch);
        if(ch >= 'A' && ch <= 'Z'){
            printf("Uppercase Character\n");
            continue;
        }
        if(ch >= 'a' && ch <= 'z') {
            printf("Lowercase Character\n");
            continue;
        }
        if(ch >= '0' && ch <= '9') {
            printf("Lowercase Character\n");
            continue;
        }
        printf("Special Character\n");
    }
    return 0;
}
