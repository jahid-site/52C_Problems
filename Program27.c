#include<stdio.h>
int power(int base,int p){
    int result = 1;
    while(p--){
        result *= base;
    }
    return result;
}
int main(){
    int T, num, n1, n2, n3;
    scanf("%d ", &T);
    while(T--){
        scanf("%d", &num);
        n1 = power(num%10,3);
        n2 = power((num/10)-10,3);
        n3 = power(num/100,3);
        if((n1 + n2 + n3) == num){
            printf("%d is an armstrong number!\n", num);
        } else {
            printf("%d is not an armstrong number!\n", num);
        }
    }
    return 0;
}
