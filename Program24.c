#include<stdio.h>
int main(){
    int T, n, i;
    scanf("%d ", &T);
    while(T--){
        scanf("%d", &n);
        int nums[n];
        for(i = 0;i < n;i++){
            scanf(" %d", &nums[i]);
        }
        for(i = 0;i < n;i += 2){
            printf("%d ", nums[i]);
        }
        printf("\n");
    }
    return 0;
}
