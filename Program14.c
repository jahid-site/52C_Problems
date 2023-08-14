#include<stdio.h>
int main(){
    int T, count;
    char first_line[100001];
    char secend_line[2];
    scanf("%d", &T);
    while(T--){
        count = 0;
        scanf(" %[^\n] ", &first_line);
        scanf(" %s", &secend_line);
        for(int i = 0;first_line[i] != '\n';i++){
            if(secend_line[0] == first_line[i]){
                count++;
            }
        }
        if(count > 0){
            printf("Occurrence of '%c' in '%s' = %d\n", secend_line[0], first_line, count);
        } else {
            printf("'%c' is not present\n");
        }
    }
    return 0;
}
