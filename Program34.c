#include<stdio.h>
int main(){
    int T, A , B, C;
    scanf("%d", &T);
    while(T--){
        scanf("%d %d %d", &A, &B, &C);
        for(int i = 1;i <= C;i++){
            if(i%A == 0 && i%B == 0){
                printf("%d\n", i);
            }
        }
        printf("\n");
    }
    return 0;
}
