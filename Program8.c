#include<stdio.h>
int main(){
    int T, n, num1, num2, num3;
    scanf("%d", &T);
    for(int i = 1;i <= T;i++){
        scanf("%d %d %d", &num1, &num2, &num3);
        if(num1 > num2){
           n = num1;
           num1 = num2;
           num2 = n;
        }
        if(num1 > num3){
            n = num1;
            num1 = num3;
            num3 = n;
        }
        if(num2 > num3){
            n = num2;
            num2 = num3;
            num3 = n;
        }
        printf("Case %d: %d %d %d\n", i, num1, num2, num3);
    }
    return 0;
}
