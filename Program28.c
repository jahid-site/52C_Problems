#include<stdio.h>
int main(){
    int T, len, i, k;
    int num[20];
    scanf("%d ", &T);
    while(T--){
        scanf("%d", &len);
        for(i = 0;i < len;i++){
            scanf("%d", &num[i]);
        }
        for(k = 0;k < len;k++){
            if(!(num[k] < num[k+1])){
                break;
            }
        }
        if(k+1 == len){
            printf("YES\n");
            len = 0;
        }
        for(k = 0;k < len;k++){
            if(!(num[k] > num[k+1])){
                printf("NO\n");
                break;
            }
        }
        if(k+1 == len){
            printf("YES\n");
        }
    }
    return 0;
}
