#include<stdio.h>
int main(){
    int T, num;
    long long int factotial = 1;
    scanf("%d", &T);
    while(T--){
        scanf("%d", &num);
        for(int i = 2;i <= num;i++){
            factotial = factotial * i;
        }
        printf("%lld\n", factotial);
    }
    return 0;
}
