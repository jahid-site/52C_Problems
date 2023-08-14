#include<stdio.h>
int power(int base,int p){
    int n = 1;
    for(int i = 0;i < p;i++){
        n *= base;
    }
    return n;
}
int main(){
    int T, X, K, sum;
    scanf("%d", &T);
    while(T--){
        scanf("%d %d", &X, &K);
        sum = 0;
        for(int i = 0;i <= K;i++){
            sum += power(X, i);
        }
        printf("Result = %d\n", sum);
    }
    return 0;
}
