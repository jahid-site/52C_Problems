#include<stdio.h>
#include<math.h>
int main(){
    int T, num;
    int sqrt_of_num;
    scanf("%d", &T);
    while(T--){
        scanf("%d", &num);
        sqrt_of_num = (int) sqrt(num);
        if(sqrt_of_num * sqrt_of_num == num){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
