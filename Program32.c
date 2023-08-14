#include<stdio.h>
int main(){
    int T, X, N;
    scanf("%d", &T);
    while(T--){
        scanf("%d %d", &X, &N);
        if(X < N){
            for(int i = X;i <= N;i++){
                if(i%X == 0){
                    printf("%d\n", i);
                }
            }
        } else {
            printf("Invalid!\n");
        }
        printf("\n");
    }
    return 0;
}
