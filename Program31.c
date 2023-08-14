#include<stdio.h>
int isPerfect(int num){
    int sum = 0;
    for(int i = 1;i < num;i++){
        if(num%i == 0){
            sum += i;
        }
    }
    if(sum == num){
        return 1;
    }
    return -1;
}
int main(){
    int T, N;
    scanf("%d ", &T);
    while(T--){
        scanf(" %d", &N);
        for(int i = 1;i <= N;i++){
            if(isPerfect(i) == 1){
                printf("%d\n", i);
            }
        }
    }
    return 0;
}
