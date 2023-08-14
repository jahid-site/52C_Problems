#include<stdio.h>
int main(){
    int T, n;
    scanf("%d", &T);
    while(T--){
        scanf("%d", &n);
        printf("Sum = %d\n", (n/10000) + (n%10));
    }
    return 0;
}
