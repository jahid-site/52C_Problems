#include<stdio.h>
int main(){
    int T, A , B, C;
    scanf("%d", &T);
    while(T--){
        scanf("%d %d %d", &A, &B, &C);
        if(A < B){
            for(int i = A;i <= B;i++){
                if(i%C == 0){
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
