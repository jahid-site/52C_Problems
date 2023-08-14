#include<stdio.h>
int main(){
    int T, count;
    double X;
    scanf("%d ", &T);
    while(T--){
        count = 0;
        scanf("%lf", &X);
        while (X > 1.0){
            X /= 2.0;
            count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
