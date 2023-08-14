#include<stdio.h>
int power(int base,int p){
    int result = 1;
    for(int i = 1;i <= p/2;i++){
        result *= base;
    }
    return 2 * result;
}
int main(){
    int T, p, q, c;
    scanf("%d", &T);
    while(T--){
        scanf("%d %d %d", &p, &q, &c);
        printf("Result = %d\n", power(p, q) % c);
    }
    return 0;
}
