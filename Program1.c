#include<stdio.h>
int main(){
    int T, num;
    scanf("%d", &T);
    while(T--){
        scanf("%d", &num);
        if(num%2 == 0){
            printf("even\n");
        } else {
            printf("odd\n");
        }
    }
    return 0;
}
