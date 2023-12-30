#include <stdio.h>

int main(){
    int num, half, all, sum;
    scanf("%d", &num);
    for(int i=0; i<num; i++){
        scanf("%d%d", &all, &half);
        sum = all*250 + half*175;
        printf("%d\n", sum);
    }
}