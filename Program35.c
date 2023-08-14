#include<stdio.h>
#include<math.h>
int main(){
    int T, Xc, Yc, X, Y, r, dis;
    scanf("%d", &T);
    while(T--){
        scanf("%d %d", &Xc, &Yc);
        scanf("%d", &r);
        scanf("%d %d", &X, &Y);
        dis = sqrt((X-Xc)*(X-Xc) + (Y-Yc)*(Y-Yc));
        if(dis < r){
            printf("The point is inside the circle\n");
        } else {
            printf("The point is not inside the circle\n");
        }
    }
    return 0;
}
