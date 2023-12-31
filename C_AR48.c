#include <stdio.h>

int main(){
    char num[5], ans[4];
    scanf("%s", num);
    ans[0] = ((num[2] - '0' + 7)%10) + '0';
    ans[1] = ((num[3] - '0' + 7)%10) + '0';
    ans[2] = ((num[0] - '0' + 7)%10) + '0';
    ans[3] = ((num[1] - '0' + 7)%10) + '0';
    for(int i=0; i<4; i++)printf("%c", ans[i]);
    printf("\n");
}