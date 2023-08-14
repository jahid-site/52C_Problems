#include<stdio.h>
int getLastNum(char str[]){
    int len = 0;
    while(str[len] != '\0'){
        len++;
    }
    len = (len-1) <= 0? 0: len-1;
    return str[len]-48;
}
int main(){
    int T;
    char num[101];
    scanf("%d", &T);
    while(T--){
        scanf(" %s", &num);
        if(getLastNum(num)%2 == 0){
            printf("even\n");
        } else {
            printf("odd\n");
        }
    }
    return 0;
}
