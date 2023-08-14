#include<stdio.h>
long long int fact(int n){
    long long int product = 1;
    for(int i = 1;i <= n;i++){
        product *= i;
    }
    return product;
}
int main(){
    int T, n;
    double sum;
    scanf("%d", &T);
    while(T--){
        scanf("%d", &n);
        sum = 0.0;
        for(int i = 1;i <= n;i++){
            sum += (double)i / fact(i);
        }
        printf("%0.4lf\n", sum);
    }
    return 0;
}
