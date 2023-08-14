#include<stdio.h>
int main(){
    int T;
    int num, sum;
    scanf("%d ", &T);
    while(T--){
        scanf(" %d", &num);
        sum = 0;
        for(int i = 1;i < num;i++){
            if(num%i == 0){
                sum += i;
            }
        }
        if(sum == num){
            printf("YES %d is a perfect number!\n", num);
        } else {
            printf("NO %d is not a perfect number!\n", num);
        }
    }
    return 0;
}
