#include<stdio.h>
int main(){
    int T, n;
    scanf("%d", &T);
    while(T--){
        scanf("%d", &n);
        printf("\n");
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
