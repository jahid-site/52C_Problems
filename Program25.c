#include<stdio.h>
int gcd(int a,int b){
    int t;
    while(b != 0){
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int main(){
    int T, n1, n2;
    scanf("%d ", &T);
    while(T--){
        scanf("%d %d", &n1, &n2);
        printf("LCM = %d\n", (n1*n2)/gcd(n1,n2));
    }
    return 0;
}
