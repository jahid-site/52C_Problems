#include<stdio.h>
int strComp(char str1,char str2){
    int i = 0;
    while (str1[i] != '\0'){
        if(str1[i] != str2[i]){
            return -1;
        }
        i++;
    }
    return 1;
}

int main(){
    int T, count;
    char line[211];
    char words[1][21];

    scanf("%d", &T);
    while(T--){
        count = 0;
        gets(line);
        for(int i = 0, int j = 0;line[i] != '\0';i++){
            if(line[i] != ' '){
                words[count][j] = line[i];
                continue;
            }
            j++;
            count++;
        }
        for(int l = 0;words[l] != '\0';l++){
            printf("%c",words[l][l]);
        }

    }
    return 0;
}
