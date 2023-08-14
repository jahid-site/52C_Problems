#include<stdio.h>
int isPrime(int a){
    for(int i = 2;i < a;i++){
        if(a%i == 0){
            return -1;
        }
    }
    return 1;
}
int main(){
    int T, a, b, count;
    scanf("%d ", &T);
    while(T--){
        scanf("%d %d", &a, &b);
        count = 0;
        while(a != b){
            if(isPrime(a) == 1){
                count++;
            }
            a++;
        }
        printf("%d\n", count);
    }
    return 0;
}
