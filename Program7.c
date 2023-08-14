#include<stdio.h>
int main(){
    int T, count;
    char line[100000];
    int isStart = -1;
    scanf("%d ", &T);
    while(T--){
        count = 1;
        gets(line);
        for(int i = 0;line[i] != '\0';i++){
            if((line[i] >= 48 && line[i] <= 57) || line[i] == 43 || line[i] == 45 || line[i] == 46){
                if(isStart != -1){
                    isStart = -1;
                    count++;
                }
                continue;
            }
            isStart = 1;
        }
        printf("%d\n",count);
    }
    return 0;
}
