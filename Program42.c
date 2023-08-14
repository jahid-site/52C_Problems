#include<stdio.h>
int main(){
    int T, n;
    scanf("%d", &T);
    while(T--){
        scanf("%d", &n);
        for(int i = n;i > 1;i--){
            printf("2^%d + ", i);
        }
        printf("2 + 1\n");
    }
    return 0;
}
