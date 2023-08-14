#include<stdio.h>
int main(){
    int T, r1, r2, B, total_ball;
    double current_rr, asking_rr;

    scanf("%d ", &T);

    while(T--){
        scanf("%d %d %d", &r1, &r2, &B);
        total_ball = 300 - B;
        current_rr = (r2 / total_ball) * 6;
        asking_rr = ((r1 - r2 + 1) / B) * 6;
        printf("%0.02lf %0.02lf\n", current_rr, asking_rr);
    }
    return 0;
}
