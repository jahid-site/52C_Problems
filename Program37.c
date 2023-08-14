#include<stdio.h>
int main(){
    int T , N, rev;
    scanf("%d", &T);
    while(T--){
        scanf(" %d", &N);
        rev = 0;
        while(N != 0){
            rev = rev * 10;
            rev = rev + N%10;
            N = N/10;
        }
        printf("%d\n", rev);
    }
    return 0;
}
